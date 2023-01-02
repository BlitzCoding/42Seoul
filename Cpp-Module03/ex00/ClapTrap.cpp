/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyonghun <iyonghun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 18:18:19 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/02 20:51:25 by iyonghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// std::string name;
// unsigned int hitPoint;
// unsigned int energyPoint;
// unsigned int attackDamage;

// ClapTrap();
// ClapTrap(std::string name);
// ClapTrap(const ClapTrap &rhs);
// ~ClapTrap();

// ClapTrap &operator=(const ClapTrap &rhs);

// void attack(const std::string &target);
// void tackDamage(unsigned int amount);
// void beRepaired(unsigned int amount);

ClapTrap::ClapTrap()
{
    name = "NULL";
    hitPoint = 0;
    energyPoint = 0;
    attackDamage = 0;
    std::cout << name << " is now create hitPoint : [ "
        << this->hitPoint << " ], energyPoint : [ " << this->energyPoint
            << " ], attackDamage : [ " << this->attackDamage << " ]\n";
    
}

ClapTrap::ClapTrap(std::string _name)
{
    this->name = _name;
    this->hitPoint = 10;
    this->energyPoint = 10;
    this->attackDamage = 0;
    std::cout << _name << " is now create hitPoint : [ "
              << this->hitPoint << " ], energyPoint : [ " << this->energyPoint
              << " ], attackDamage : [ " << this->attackDamage << " ]\n";
}

ClapTrap::ClapTrap(const ClapTrap& _rhs)
{
    this->name = _rhs.name;
    this->attackDamage = _rhs.attackDamage;
    this->energyPoint = _rhs.energyPoint;
    this->hitPoint = _rhs.hitPoint;
    std::cout << name << " is now create hitPoint : [ "
              << this->hitPoint << " ], energyPoint : [ " << this->energyPoint
              << " ], attackDamage : [ " << this->attackDamage << " ]\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap& _rhs)
{
    this->name = _rhs.name;
    this->attackDamage = _rhs.attackDamage;
    this->energyPoint = _rhs.energyPoint;
    this->hitPoint = _rhs.hitPoint;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << this->name << " is now destructor\n";
}

void ClapTrap::attack(const std::string &target)
{
    if (this->hitPoint <= 0 || this->energyPoint <= 0)
    {
        std::cout << this->name << " can't do anything\n";
        return ;
    }
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing "
        << this->attackDamage << " points of damage\n";
    this->energyPoint--;
    std::cout << name << " is now hitPoint : [ "
              << this->hitPoint << " ], energyPoint : [ " << this->energyPoint
              << " ], attackDamage : [ " << this->attackDamage << " ]\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount > this->hitPoint)
        this->hitPoint = 0;
    else
    {
        this->hitPoint -= amount;
        std::cout << "ClapTrap " << this->name << " has taken " << amount << " damage\n";
    }
    
    if (this->hitPoint == 0)
    {
        std::cout	<< "ClapTrap " << this->name << " is die\n";
    }
    std::cout << name << " is now hitPoint : [ "
              << this->hitPoint << " ], energyPoint : [ " << this->energyPoint
              << " ], attackDamage : [ " << this->attackDamage << " ]\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitPoint <= 0 || this->energyPoint <= 0)
    {
		std::cout << this->name << " can't do anything\n";
        return ;
	}
    this->hitPoint += amount;
    this->energyPoint--;
    std::cout << this->name << " has been repaired of " << amount << " Hit points\n";
    std::cout << name << " is now hitPoint : [ "
              << this->hitPoint << " ], energyPoint : [ " << this->energyPoint
              << " ], attackDamage : [ " << this->attackDamage << " ]\n";
}