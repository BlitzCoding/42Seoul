/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 14:36:17 by yonghlee          #+#    #+#             */
/*   Updated: 2022/12/25 14:49:40 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA()
{

}

HumanA::HumanA(std::string _name, Weapon _weapon) : weapon(_weapon), name(_name)
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