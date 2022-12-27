/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 14:36:17 by yonghlee          #+#    #+#             */
/*   Updated: 2022/12/27 15:11:07 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_weapon) : name(_name), weapon(_weapon)
{

}

HumanA::~HumanA()
{
    std::cout << "HumanA Destroy\n";
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << '\n';
}