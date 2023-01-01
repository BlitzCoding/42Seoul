/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyonghun <iyonghun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 20:17:18 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/01 20:27:24 by iyonghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap clap("clap");
	ScavTrap scav("scav");

	clap.attack("scav");
	scav.takeDamage(10);
	scav.beRepaired(5);

	std::cout << "\n===============================\n";

	scav.attack("clap");
	clap.takeDamage(3);
	clap.beRepaired(2);

	std::cout << "\n===============================\n";

	scav.guardGate();
	clap.attack("scav");
	scav.takeDamage(200);
	scav.takeDamage(200);
	scav.takeDamage(200);
	scav.beRepaired(10);
}
