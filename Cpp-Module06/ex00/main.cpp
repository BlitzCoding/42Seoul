/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:14:18 by iyonghun          #+#    #+#             */
/*   Updated: 2023/02/14 16:43:58 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char **argv)
{
	Convert conversion;
	
	if (argc != 2)
	{
		std::cout << "Need 2 Arguments" << std::endl;
		return 0;
	}
	try {
		conversion.detect_type(argv[1]);
		conversion.convert_data();
		conversion.print_data();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		std::cout << "Conversion aborted because of the reason above. Check back your args !" << std::endl;
	}
	return 0;
}