/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyonghun <iyonghun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 20:35:46 by iyonghun          #+#    #+#             */
/*   Updated: 2023/01/02 20:49:59 by iyonghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap Default Constructor\n";
}

FragTrap::FragTrap(const FragTrap& _rhs): ClapTrap(_rhs)
{
	std::cout << "FragTrap Copy Constructor\n";
}

FragTrap::FragTrap(std::string _name): ClapTrap(_name)
{
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap Constructor " << this->name << " called\n";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Deconstructor " << this->name << " called\n";
}

FragTrap &FragTrap::operator=(const FragTrap& _rhs)
{
	std::cout << "FragTrap Assignation operator called\n";
	this->name = _rhs.name;
	this->hitPoint = _rhs.hitPoint;
	this->energyPoint = _rhs.energyPoint;
	this->attackDamage = _rhs.attackDamage;
	return (*this);
}

void	FragTrap::highFiveGuys()
{
	if (this->hitPoint <= 0 || this->energyPoint <= 0)
    {
        std::cout << "[FragTrap] " << this->name << " is die\n";
    }
	else
		std::cout << "FragTrap " << this->name << " do highFive\n";
}