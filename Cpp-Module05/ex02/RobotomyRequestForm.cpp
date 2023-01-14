/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:45:57 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/14 14:55:10 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &old) : Form(old) {
	this->target = old.target;
}

const RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
	if (this == &rhs)
		return (*this);
	Form::operator=(rhs);
	this->target = rhs.target;
	return (*this);
}

bool RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (!this->Form::getSign()) {
		std::cout << "the form isn't signed yet!" << std::endl;
		return (false);
	}
	if (executor.Bureaucrat::getGrade() <= this->Form::getGradeToExecute()) {
		std::cout << "BzZzZzZzZz..." << std::endl;
		srand((unsigned int)time(NULL));
		if (rand() % 2 == 1)
			std::cout << this->target << " has been robotomized successfully" << std::endl;
		else
			std::cout << "Robotomizing " << this->target << " was failure" << std::endl;
		return (true);
	}
	else
		throw GradeTooLowException();
}
