/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:37:38 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/14 13:37:39 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
	private:
		int					grade;
		const std::string	name;
		
	public:
		int getGrade(void) const;
		void setGrade(int grade);
		const std::string getName(void) const;
		void increment();
		void decrement();

		const Bureaucrat& operator=(const Bureaucrat &rhs);
		Bureaucrat(const Bureaucrat &rhs);
		Bureaucrat(std::string name);
		~Bureaucrat();

		class GradeTooHighException : public std::exception {
			virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &source);

#endif