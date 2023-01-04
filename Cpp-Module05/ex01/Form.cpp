/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyonghun <iyonghun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 20:46:34 by iyonghun          #+#    #+#             */
/*   Updated: 2023/01/04 20:51:40 by iyonghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("NULL"), flag(false), gradeToSign(150), gradeToExecute(150)
{
    std::cout << "Form default constructor called\n";
}

Form::Form(std::string const name, int const gradeToSign, int const gradeToExecute) : name(name), flag(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    std::cout << "Form constructor called\n";
    if (gradeToSign > 150)
        throw Form::GradeTooLowException();
    if (gradeToSign < 1)
        throw Form::GradeTooHighException();
    if (gradeToExecute > 150)
        throw Form::GradeTooLowException();
    if (gradeToExecute < 1)
        throw Form::GradeTooHighException();
}

Form::~Form()
{
    std::cout << "Form destructor called\n";
}

Form::Form(Form const &src) : name(src.name), flag(src.flag), gradeToSign(src.gradeToSign), gradeToExecute(src.gradeToExecute)
{
    std::cout << "Form copy constructor called\n";
    if (gradeToSign > 150)
        throw Form::GradeTooLowException();
    if (gradeToSign < 1)
        throw Form::GradeTooHighException();
    if (gradeToExecute > 150)
        throw Form::GradeTooLowException();
    if (gradeToExecute < 1)
        throw Form::GradeTooHighException();
}

int Form::getGradeToSign() const
{
    if (gradeToSign > 150)
        throw Form::GradeTooLowException();
    if (gradeToSign < 1)
        throw Form::GradeTooHighException();
    return gradeToSign;
}

int Form::getGradeToExecute() const
{
    if (gradeToExecute > 150)
        throw Form::GradeTooLowException();
    if (gradeToExecute < 1)
        throw Form::GradeTooHighException();
    return gradeToExecute;
}

std::string Form::getName() const
{
    return name;
}

bool Form::getFlag() const
{
    if (flag == true)
        return true;
    else
        return false;
}

void Form::beSigned(Bureaucrat const &b)
{
    flag = true;
    if (b.getGrade() > gradeToSign)
    {
        throw Form::GradeTooLowException();
        flag = false;
    }
    if (b.getGrade() < 1)
    {
        throw Form::GradeTooHighException();
        flag = false;
    }
}



const char *Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too low to be flag");
}

const char *Form::NotSignedException::what() const throw()
{
    return ("Form is not flag");
}

Form &Form::operator=(Form const &rhs)
{
    std::cout << "Form operator = overload called\n";
    if (this != &rhs)
        flag = rhs.flag;
    return *this;
}

std::ostream &operator<<(std::ostream &o, Form const &rhs)
{
    o << "Form: " << rhs.getName() << '\n';
    o << "Grade to sign: " << rhs.getGradeToSign() << '\n';
    o << "Grade to execute: " << rhs.getGradeToExecute() << '\n';
    return o;
}