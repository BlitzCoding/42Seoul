/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:04:42 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/12 12:34:16 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form
{
public:
    Form();
    Form(const std::string &name, int signGrade, int execGrade);
    Form(const Form &src);
    ~Form();
    Form&operator=(const Form &other);

    class GradeTooHightException : public std::exception
    { 
    public: 
        virtual const char *what() const throw(){return("grade is too high");}
    }; 
    class GradeTooLowException : public std::exception
    { 
    public: 
        virtual const char *what() const throw(){return("grade is too low");}
    }; 
    class GradeUnexecutedException : public std::exception
    { 
    public: 
        virtual const char *what() const throw(){return("cannot be executed");}
    }; 

    const std::string       getName() const;
    bool                    isSigned() const;
    int                     getSignGrade() const;
    int                     getExecGrade() const;
    void                    beSigned(Bureaucrat &Bureaucrat);

private:
    const std::string name;
    bool sign;
    const unsigned int signGrade;
    const unsigned int execGrade;

};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif