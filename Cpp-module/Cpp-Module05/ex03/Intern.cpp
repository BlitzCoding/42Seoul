/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:49:34 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/14 15:07:57 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Success Make Intern" << std::endl;
}

Intern::~Intern() {
	std::cout << "Fire Intern" << std::endl;
}

Form* Intern::makeForm(std::string name_of_form, std::string target_for_form) {
	int i = 0;
	std::string forms[3];
	forms[0] = "shrubbery creation";
	forms[1] = "robotomy request";
	forms[2] = "presidential pardon";

	while ((i < 3) && (forms[i] != name_of_form))
		i++;
	switch (i)
	{
		case 0:
			std::cout << "Intern creates " << forms[i] << std::endl;
			return new ShrubberyCreationForm(target_for_form);
		case 1:
			std::cout << "Intern creates " << forms[i] << std::endl;
			return new RobotomyRequestForm(target_for_form);
		case 2:
			std::cout << "Intern creates " << forms[i] << std::endl;
			return new PresidentialPardonForm(target_for_form);
		default:
			std::cout << "I don't know this type of form!" << std::endl;
			break;
	}
	return (NULL);
}
	
Intern::Intern(const Intern &old) {
	*this = old;
}
	
const Intern & Intern::operator=(const Intern &to_assignation) {
	if (this != &to_assignation)
		*this = to_assignation;
	return (*this);
}
