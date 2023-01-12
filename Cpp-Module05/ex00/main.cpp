/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:56:34 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/12 12:32:59 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat a("A", 1);

		Bureaucrat b("B", 43);

		Bureaucrat c("C", 150);

		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;

		// a.gradeUp();
		b.gradeUp();
		// c.gradeDown();

		std::cout << a << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}