/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyonghun <iyonghun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 20:17:18 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/01 19:48:27 by iyonghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap kim("KIM");
	ClapTrap lee("LEE");

	kim.attack("LEE");
	lee.takeDamage(5);
	
	std::cout << "\n===============================\n";

	lee.attack("KIM");
	kim.takeDamage(8);
	kim.beRepaired(3);
	kim.beRepaired(3);

	std::cout << "\n===============================\n";

	kim.attack("LEE");
	lee.takeDamage(2);
	lee.takeDamage(2);
	lee.takeDamage(2);
	lee.takeDamage(2);
	lee.beRepaired(3);
}