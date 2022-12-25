/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyonghun <iyonghun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 22:59:57 by iyonghun          #+#    #+#             */
/*   Updated: 2022/12/25 23:02:03 by iyonghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{

}

HumanB::HumanB(std::string _name) : name(_name)
{

}

HumanB::~HumanB()
{

}

void HumanB::setWeapon(Weapon _weapon)
{
    this->weapon = _weapon;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << '\n';
}