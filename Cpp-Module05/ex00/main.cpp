/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:29:54 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/12 16:19:10 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat A("KIM", 1);
		Bureaucrat B("LEE", 150);
		// A.incrementGrade();
		A.decrementGrade();
		B.incrementGrade();
		// B.decrementGrade();
		std::cout << A;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}