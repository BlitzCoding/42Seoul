/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:05:59 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/12 12:10:17 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) :
Form(src.getName(), src.getSignGrade(), src.getExecGrade(), src.getTarget())
{
	std::cout << "Copy construtor called for ShrubberyCreationForm" << '\n';
	*this = src;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm():
Form("Shruberry Creation Form", 145, 137, "default")
{
	std::cout << "Default constructor called for ShrubberyCreationForm" << '\n';
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): 
Form("Shruberry Creation Form", 145, 137, target)
{
	std::cout << "Default construtor called for ShrubberyCreationForm" << '\n';
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor called for ShrubberyCreationForm" << '\n';
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & other) 
{
	std::cout << "Assignement operator for ShrubberyCreationForm" << '\n';
	(void) other;
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	if (!this->isSigned())
		throw FormNotSignedException();
	std::ofstream output((this->getTarget() + "_shrubbery").c_str());
	if (!output.is_open())
		throw OutputFileException();
	
	output << "                                                         ." << '\n';
	output << "                                              .         ;  " << '\n';
	output << "                 .              .              ;%     ;;   " << '\n';
	output << "                   ,           ,                :;%  %;   " << '\n';
	output << "                    :         ;                   :;%;'     .,   " << '\n';
	output << "           ,.        %;     %;            ;        %;'    ,;" << '\n';
	output << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << '\n';
	output << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << '\n';
	output << "               ;%;      %;        ;%;        % ;%;  ,%;'" << '\n';
	output << "                `%;.     ;%;     %;'         `;%%;.%;'" << '\n';
	output << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << '\n';
	output << "                    `:%;.  :;bd%;          %;@%;'" << '\n';
	output << "                      `@%:.  :;%.         ;@@%;'   " << '\n';
	output << "                        `@%.  `;@%.      ;@@%;         " << '\n';
	output << "                          `@%%. `@%%    ;@@%;        " << '\n';
	output << "                            ;@%. :@%%  %@@%;       " << '\n';
	output << "                              %@bd%%%bd%%:;     " << '\n';
	output << "                                #@%%%%%:;;" << '\n';
	output << "                                %@@%%%::;" << '\n';
	output << "                                %@@@%(o);  . '         " << '\n';
	output << "                                %@@@o%;:(.,'         " << '\n';
	output << "                            `.. %@@@o%::;         " << '\n';
	output << "                               `)@@@o%::;         " << '\n';
	output << "                                %@@(o)::;        " << '\n';
	output << "                               .%@@@@%::;         " << '\n';
	output << "                               ;%@@@@%::;.          " << '\n';
	output << "                              ;%@@@@%%:;;;. " << '\n';
	output << "                          ...;%@@@@@%%:;;;;,.." << '\n';

	output.close();
	std::cout << "Tree create in " + getTarget() + "_shrubbery" << '\n';
}