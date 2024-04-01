/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:44:09 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/14 14:11:22 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const std::string Form::getName() const
{
	return (this->name);
}

bool Form::getSign() const
{
	return (this->is_signed);
}

int Form::getGradeToSign() const
{
	return (this->grade_to_sign);
}

int Form::getGradeToExecute() const
{
	return (this->grade_to_execute);
}

bool Form::beSigned(const Bureaucrat &rhs)
{
	if (rhs.Bureaucrat::getGrade() <= this->Form::getGradeToSign())
	{
		this->is_signed = true;
		return (true);
	}
	else
	{
		throw GradeTooLowException();
	}
	return (false);
}

const Form &Form::operator=(const Form &rhs)
{
	if (this != &rhs)
	{
		(std::string) this->name = rhs.getName();
		this->is_signed = rhs.getSign();
	}
	return (*this);
}

Form::Form(const Form &rhs) : name(rhs.getName()), grade_to_sign(rhs.getGradeToSign()), grade_to_execute(rhs.Form::getGradeToExecute())
{
	this->is_signed = rhs.getSign();
}

Form::Form(std::string name, int grade_to_sign, int grade_to_execute) : name(name), is_signed(0), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute)
{
	if (this->getGradeToSign() < 1)
		throw GradeTooHighException();
	else if (this->getGradeToSign() > 150)
		throw GradeTooLowException();
}

Form::~Form() {}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high for the form!");
};

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low for the form!");
}

std::ostream &operator<<(std::ostream &out, Form const &source)
{
	std::string status;

	status = source.Form::getSign() ? " is signed" : " isn't signed";
	out << "The form " << source.getName() << " with grade to sign = " << source.getGradeToSign() << " and grade to execute = " << source.Form::getGradeToExecute() << status;
	return (out);
}