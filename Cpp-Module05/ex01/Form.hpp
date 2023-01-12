/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:30:00 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/12 16:05:45 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include "Bureaucrat.hpp"

class Form
{
	private:
		bool _signed;
		std::string const _name;
		int const _signGrade;
		int const _execGrade;
	public:
		Form();
		Form(std::string name, int grade2Sign, int grade2Execute);
		Form(Form const &in);
		~Form();

		Form &operator=(Form const &form);
		
		bool getSigned();
		bool beSigned(Bureaucrat &crat);
		std::string const getName() const;
		int	getSignGrade() const;
		int	getExecGrade() const;
		
		void	signForm(Bureaucrat &crat);

		class GradeTooHighException : public std::exception
		{
		public:
			virtual const char *what() const throw() { return ("grade is too high"); }
		};
		class GradeTooLowException : public std::exception
		{
		public:
			virtual const char *what() const throw() { return ("grade is too low"); }
		};
};

std::ostream &operator<<(std::ostream &os, Form &form);

#endif