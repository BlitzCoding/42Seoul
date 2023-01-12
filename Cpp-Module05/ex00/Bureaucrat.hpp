/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:29:53 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/12 15:44:31 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <string>
#include <iostream>
#include <stdexcept>

class Bureaucrat
{
	private:
		std::string const _name;
		
		int	_grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &rhs);
		~Bureaucrat();
		
		std::string const	getName() const;
		
		void	incrementGrade();
		void	decrementGrade();
		int	getGrade() const;
		Bureaucrat &operator=(Bureaucrat const &rhs);

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

std::ostream &operator<<(std::ostream &os, const Bureaucrat &out);

#endif