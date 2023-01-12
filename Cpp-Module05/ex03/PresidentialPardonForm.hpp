/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:07:18 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/12 12:20:09 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string &target);
    PresidentialPardonForm(const PresidentialPardonForm &src);
    virtual ~PresidentialPardonForm();
    PresidentialPardonForm&operator=(const PresidentialPardonForm &other);

    void execute(const Bureaucrat& executor) const;

};

std::ostream	&operator<<( std::ostream &ostream, const PresidentialPardonForm &instance );

#endif