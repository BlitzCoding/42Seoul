/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:07:31 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/12 12:10:46 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) :
Form(src.getName(), src.getSignGrade(), src.getExecGrade(), src.getTarget())
{
	std::cout << "Copy construtor called for ShrubberyCreationForm" << std::endl;
	*this = src;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm():
Form("Shruberry Creation Form", 145, 137, "default")
{
	std::cout << "Default constructor called for ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): 
Form("Shruberry Creation Form", 145, 137, target)
{
	std::cout << "Default construtor called for ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor called for ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & other) 
{
	std::cout << "Assignement operator for ShrubberyCreationForm" << std::endl;
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
	
	output << "                                                         ." << std::endl;
	output << "                                              .         ;  " << std::endl;
	output << "                 .              .              ;%     ;;   " << std::endl;
	output << "                   ,           ,                :;%  %;   " << std::endl;
	output << "                    :         ;                   :;%;'     .,   " << std::endl;
	output << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
	output << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	output << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
	output << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
	output << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	output << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	output << "                    `:%;.  :;bd%;          %;@%;'" << std::endl;
	output << "                      `@%:.  :;%.         ;@@%;'   " << std::endl;
	output << "                        `@%.  `;@%.      ;@@%;         " << std::endl;
	output << "                          `@%%. `@%%    ;@@%;        " << std::endl;
	output << "                            ;@%. :@%%  %@@%;       " << std::endl;
	output << "                              %@bd%%%bd%%:;     " << std::endl;
	output << "                                #@%%%%%:;;" << std::endl;
	output << "                                %@@%%%::;" << std::endl;
	output << "                                %@@@%(o);  . '         " << std::endl;
	output << "                                %@@@o%;:(.,'         " << std::endl;
	output << "                            `.. %@@@o%::;         " << std::endl;
	output << "                               `)@@@o%::;         " << std::endl;
	output << "                                %@@(o)::;        " << std::endl;
	output << "                               .%@@@@%::;         " << std::endl;
	output << "                               ;%@@@@%::;.          " << std::endl;
	output << "                              ;%@@@@%%:;;;. " << std::endl;
	output << "                          ...;%@@@@@%%:;;;;,.." << std::endl;

	output.close();
	std::cout << "Tree create in " + getTarget() + "_shrubbery" << std::endl;
}