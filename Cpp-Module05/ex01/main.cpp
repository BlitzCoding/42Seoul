/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:04:47 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/12 12:38:40 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try {
		Form form("Form", 5, 5);
		Bureaucrat A("A", 2);

		Bureaucrat B("B", 43);

		Bureaucrat C("C", 149);
		
		std::cout << "--------" << std::endl;
		std::cout << A << std::endl;
		std::cout << B << std::endl;
		std::cout << C << std::endl;
		std::cout << "--------" << std::endl;

		A.gradeUp();
		B.gradeUp();
		C.gradeDown();

		std::cout << A << std::endl;
		std::cout << B << std::endl;
		std::cout << C << std::endl;
		std::cout << "--------" << std::endl;

		form.beSigned(A);
		if (form.isSigned())
			std::cout << "Form signed" << std::endl;
		else
			std::cout << "Form not signed" << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}