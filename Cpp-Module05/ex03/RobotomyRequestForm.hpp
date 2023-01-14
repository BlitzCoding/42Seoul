/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:49:52 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/14 13:49:53 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string target;

	public:
		bool execute(Bureaucrat const & executor) const;
		const RobotomyRequestForm &operator=(const RobotomyRequestForm &to_assignation);
		RobotomyRequestForm(const RobotomyRequestForm &old);
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
};

#endif