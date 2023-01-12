/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:56:30 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/12 12:19:10 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>

class Bureaucrat
{
public:
    Bureaucrat();
    Bureaucrat(const std::string name, unsigned int grade);
    Bureaucrat(const Bureaucrat &src);
    virtual ~Bureaucrat();
    Bureaucrat&operator=(const Bureaucrat &other);

    const std::string &getName() const;
    const unsigned int &getGrade() const;
    
    void gradeUp();
    void gradeDown();

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

private:
    
    const std::string name;
    unsigned int grade;

};

std::ostream	&operator<<( std::ostream &ostream, const Bureaucrat &instance );

#endif