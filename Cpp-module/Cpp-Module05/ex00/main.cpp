/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:02:24 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/14 14:04:14 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat first("KIM");
	Bureaucrat second("LEE");

	std::cout << "=== Wrong Bureaucrat ===" << std::endl;

	try
	{
		first.setGrade(0);
		std::cout << first << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		second.setGrade(151);
		std::cout << second << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n=== Good Bureaucrat ===" << std::endl;

	try
	{
		first.setGrade(2);
		std::cout << first << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		second.setGrade(149);
		std::cout << second << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << "\n=== Test Member ===" << std::endl;
	try
	{
		first.increment();
		std::cout << first << std::endl;
		// first.increment();
		// std::cout << first << std::endl;
		// second.decrement();
		// std::cout << second << std::endl;
		// second.decrement();
		// std::cout << second << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}