/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyonghun <iyonghun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 20:36:50 by iyonghun          #+#    #+#             */
/*   Updated: 2023/01/04 20:52:10 by iyonghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        std::string const name;
        bool flag;
        int const gradeToSign;
        int const gradeToExecute;
    public:
        Form();
        Form(std::string const name, int const gradeToSign, int const gradeToExecute);
        Form(Form const &src);
        ~Form();

        Form & operator=(Form const & rhs);

        std::string getName() const;
        bool getFlag() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;

        void beSigned(Bureaucrat const &b);

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class NotSignedException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream & operator << (std::ostream & o, Form const & rhs);