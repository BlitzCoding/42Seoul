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

HumanA::HumanA(std::string _name, std::string _weapon)
{
    this->name = _name;
    this->weapon = _weapon;
}

HumanA::~HumanA()
{

}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon << '\n';
}