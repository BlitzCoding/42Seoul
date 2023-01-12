/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:29:30 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/12 15:47:11 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("NONE"), _grade(100)
{
	
}

Bureaucrat::Bureaucrat(Bureaucrat const & rhs) : _name(rhs._name){
	this->_grade = rhs._grade;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	// 넘어가지 않는다
	if (grade < 1 || grade > 150)
		this->_grade = 150;
	else
		this->_grade = grade;	
}

void	Bureaucrat::decrementGrade()
{
	if (_grade == 150)
		throw GradeTooLowException();
	else
		this->_grade++;
}

void	Bureaucrat::incrementGrade()
{
	if (_grade == 1)
		throw GradeTooHighException();
	else
		this->_grade--;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &rhs)
{
	_grade = rhs._grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{

}

std::string const Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &out)
{
	os << out.getName() << ", bureacrat grade " << out.getGrade() << std::endl;
	return (os);
}
