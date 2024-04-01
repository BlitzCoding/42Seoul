/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:45:57 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/14 14:55:16 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string target;

public:
	bool execute(Bureaucrat const &executor) const;
	const PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
	PresidentialPardonForm(const PresidentialPardonForm &old);
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();
};

#endif