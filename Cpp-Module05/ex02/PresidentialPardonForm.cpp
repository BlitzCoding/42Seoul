/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:45:56 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/14 15:19:26 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &old) : Form(old) {
	this->target = old.target;
}

const PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
	if (this == &rhs)
		return (*this);
	Form::operator=(rhs);
	this->target = rhs.target;
	return (*this);
}

bool PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (!this->Form::getSign()) {
		std::cout << "the form isn't signed yet!" << std::endl;
		return (false);
	}
	if (executor.Bureaucrat::getGrade() <= this->Form::getGradeToExecute()) {
		std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
		return (true);
	}
	else
		throw GradeTooLowException();
}
