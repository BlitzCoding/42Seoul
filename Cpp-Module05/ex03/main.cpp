/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:49:38 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/14 15:09:06 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main() {
	Bureaucrat first("Kim");
	Bureaucrat second("LEE");
	Bureaucrat third("CHOI");
	
	first.Bureaucrat::setGrade(137);
	second.Bureaucrat::setGrade(45);
	third.Bureaucrat::setGrade(5);

	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << third << std::endl;

	std::cout << "\n=== Intern ===" << std::endl;

	Intern intern;

	std::cout << "\n=== Intern makes forms ===" << std::endl;

	Form *fifth = intern.Intern::makeForm("robotomy request", "Kim");
	Form *sixth = intern.Intern::makeForm("shrubbery creation", "LEE");
	Form *seventh = intern.Intern::makeForm("presidential pardon", "CHOI");
	try {
		Form *eighth;
		eighth = intern.Intern::makeForm("bla", "bla");
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n=== try sign forms ===" << std::endl;

	try {
		first.Bureaucrat::signForm(*sixth);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		second.Bureaucrat::signForm(*fifth);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		third.Bureaucrat::signForm(*seventh);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n=== try to execute forms ===" << std::endl;

	try {
		first.Bureaucrat::executeForm(*sixth);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		second.Bureaucrat::executeForm(*fifth);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		third.Bureaucrat::executeForm(*seventh);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	delete fifth;
	delete sixth;
	delete seventh;
	return (0);
}