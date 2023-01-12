/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:05:11 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/12 12:19:32 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
    Form();
    Form(const std::string name, int signGrade, int execGrade, const std::string target);
    Form(const Form &src);
    virtual ~Form() = 0;
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
    class FormNotSignedException: public std::exception 
    {
	public:
		virtual const char* what() const throw() {return ("form is not signed");}
	};

    const std::string    getName() const;
    bool                 isSigned() const;
    int                  getSignGrade() const;
    int                  getExecGrade() const;
    std::string          getTarget() const;
    void                 beSigned(Bureaucrat const &bureaucrat);
    virtual void         execute(const Bureaucrat &bureaucrat) const;

    void	             setSignature(const bool sign);
	void	             setTarget(const std::string target);

private:
    
    std::string name;
    bool sign;
    const int signGrade;
    const int execGrade;
    std::string target;
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif