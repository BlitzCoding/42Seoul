/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:30:01 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/12 16:50:03 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
	try
	{
		Bureaucrat crat("KIM", 2);
		Form form("FormA", 2, 3);
		Form form2("FormB", 150, 150);

		form.signForm(crat);

		std::cout << form << std::endl;

		crat.incrementGrade();
		form.signForm(crat);
		form2.signForm(crat);

		std::cout << form << std::endl;
		
		crat.incrementGrade();
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

}