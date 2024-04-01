/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyonghun <iyonghun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 20:17:18 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/02 20:44:42 by iyonghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap a("A");
	ScavTrap b("B");

	FragTrap c("C");
	FragTrap d("D");

	c.attack("D");
	d.takeDamage(20);
	d.beRepaired(10);

	d.attack("C");
	c.takeDamage(20);
	c.highFiveGuys();

	d.attack("C");
	c.takeDamage(70);
	c.takeDamage(10);
	c.attack("D");
	c.beRepaired(10);
	c.highFiveGuys();
}