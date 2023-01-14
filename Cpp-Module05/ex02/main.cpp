/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:44:28 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/14 15:05:47 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
	Bureaucrat first("KIM");
	Bureaucrat second("LEE");
	Bureaucrat sixth("CHOI");
	
	first.Bureaucrat::setGrade(138);
	second.Bureaucrat::setGrade(46);
	sixth.Bureaucrat::setGrade(6);

	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << sixth << std::endl;

	Form *third = new PresidentialPardonForm("LEE");
	Form *fourth = new RobotomyRequestForm("KIM");
	Form *fifth = new ShrubberyCreationForm("CHOI");

	std::cout << *third << std::endl;
	std::cout << *fourth << std::endl;
	std::cout << *fifth << std::endl;

	std::cout << "\n=== Sign forms ===" << std::endl;

	try {
		first.Bureaucrat::signForm(*fifth);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		second.Bureaucrat::signForm(*fourth);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		sixth.Bureaucrat::signForm(*third);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n=== Fail Execute forms ===" << std::endl;

	try {
		first.Bureaucrat::executeForm(*fifth);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		second.Bureaucrat::executeForm(*fourth);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		sixth.Bureaucrat::executeForm(*third);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n=== Increase ===" << std::endl;

	try {
		first.Bureaucrat::increment();
		std::cout << first << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		second.Bureaucrat::increment();
		std::cout << second << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		sixth.Bureaucrat::increment();	
		std::cout << sixth << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n=== Good Execute forms===" << std::endl;

	try {
		sixth.Bureaucrat::executeForm(*third);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		second.Bureaucrat::executeForm(*fourth);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		first.Bureaucrat::executeForm(*fifth);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	delete third;
	delete fourth;
	delete fifth;
	return (0);
}