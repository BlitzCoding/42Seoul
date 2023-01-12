/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:05:03 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/12 12:19:26 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>
#include "Form.hpp"

#define DEBUG "\033[1;36m"
#define NOICE "\033[1;32m"
#define ERROR "\033[1;31m"
#define RESET "\033[0;0m"

class Form;

class Bureaucrat
{
public:
    Bureaucrat();
    Bureaucrat(const std::string name, unsigned int grade);
    Bureaucrat(const Bureaucrat &src);
    virtual ~Bureaucrat();

    const std::string &getName() const;
    const int &getGrade() const;
    
    void gradeUp();
    void gradeDown();

    void signForm(Form& form);
    void executeForm(const Form &form);

    class GradeTooHighException : public std::exception
    { 
    public: 
        virtual const char *what() const throw(){return("grade is too high");}
    }; 
    class GradeTooLowException : public std::exception
    { 
    public: 
        virtual const char *what() const throw(){return("grade is too low");}
    }; 

private:
    Bureaucrat&operator=(const Bureaucrat &other);
    
    const std::string name;
    int grade;
};

std::ostream	&operator<<( std::ostream &ostream, const Bureaucrat &instance );

#endif