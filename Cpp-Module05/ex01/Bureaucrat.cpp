/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:42:51 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/14 14:09:44 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name) : name(name) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs)
{
	*this = rhs;
}

const Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	if (this != &rhs)
	{
		this->setGrade(rhs.getGrade());
		(std::string) this->name = (std::string)rhs.getName();
	}
	return (*this);
}

int Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

const std::string Bureaucrat::getName(void) const
{
	return (this->name);
}

void Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		this->grade = grade;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high for the bureaucrat!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low for the bureaucrat!");
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &source)
{
	out << source.getName() << ", bureaucrat grade " << source.getGrade();
	return (out);
}

void Bureaucrat::increment()
{
	if (this->getGrade() < 2)
		throw GradeTooHighException();
	else
		this->grade--;
}

void Bureaucrat::decrement()
{
	if (this->getGrade() > 149)
		throw GradeTooLowException();
	else
		this->grade++;
}

void Bureaucrat::signForm(Form &form) const
{
	if (form.Form::beSigned(*this))
	{
		std::cout << this->getName() << " signs ";
		std::cout << form.getName() << std::endl;
	}
	else
	{
		std::cout << this->getName() << " cannot sing " << form.getName();
		std::cout << " because his grade too low" << std::endl;
	}
}
