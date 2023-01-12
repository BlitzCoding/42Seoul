/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:29:58 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/12 16:04:51 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("NONE"), _signGrade(10), _execGrade(10)
{

}

Form::Form(Form const & in) : _name(in._name), _signGrade(in._signGrade), _execGrade(in._execGrade)
{	
	_signed = in._signed;
}

Form::Form(std::string name, int _signGrade, int _execGrade) : _name(name), _signGrade(_signGrade), _execGrade(_execGrade)
{
	if (_signGrade < 1 || _execGrade < 1)
		throw GradeTooHighException();
	else if (_signGrade > 150 || _execGrade > 150)
		throw GradeTooLowException();
	_signed = false;
}

bool	Form::getSigned()
{
	return (this->_signed);
}

std::string const Form::getName() const
{
	return (this->_name);
}

int	Form::getSignGrade() const
{
	return (this->_execGrade);
}

int	Form::getExecGrade() const
{
	return (this->_signGrade);
}

bool	Form::beSigned(Bureaucrat &crat)
{
	if (crat.getGrade() < this->_signGrade)
	{
		_signed = true;
		return (true);
	}
	else
		throw GradeTooHighException();
	return (false);
}

void	Form::signForm(Bureaucrat &crat)
{	
	try
	{
		if (beSigned(crat))
			std::cout << crat.getName() << " signs " << this->_name << "!" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << crat.getName() << " cannot sign " << this->_name << " because " << e.what() << std::endl;
	}
}

Form::~Form()
{

}

std::ostream &operator<<(std::ostream &os, Form &form)
{
	os << form.getName() << " [Sign: " << form.getExecGrade() << "] [Execute: " << form.getSignGrade() << "] is " << (form.getSigned() ? "signed!" : "not signed!");

	return (os); 
}