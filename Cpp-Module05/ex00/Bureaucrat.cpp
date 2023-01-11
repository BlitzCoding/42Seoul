/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyonghun <iyonghun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 19:59:52 by iyonghun          #+#    #+#             */
/*   Updated: 2023/01/11 21:39:07 by iyonghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("NUL"), grade(100)
{

}

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    try {
        if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
        else if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
    }
    catch (const std::exception & e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &rhs) : name(rhs.name)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    try {
        if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
        else if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
    }
    catch (const std::exception & e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    grade = rhs.grade;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

std::string Bureaucrat::getName() const
{
    return name;
}

Bureaucrat & Bureaucrat::operator = (Bureaucrat const &rhs)
{
    std::cout << "Bureaucrat assignment operator called" << std::endl;
    if (this != &rhs)
    {
        grade = rhs.grade;
    }
    return *this;
}

std::ostream & operator << (std::ostream & out, Bureaucrat const & rhs)
{
    out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return out;
}

void Bureaucrat::addGrade()
{
    grade--;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::downGrade()
{
    grade++;
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade Too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade Too Low";
}