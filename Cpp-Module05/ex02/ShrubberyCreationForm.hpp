/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:46:01 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/14 14:55:33 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string target;
		
	public:
		bool execute(Bureaucrat const & executor) const;
		const ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
		ShrubberyCreationForm(const ShrubberyCreationForm &old);
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
};

#endif