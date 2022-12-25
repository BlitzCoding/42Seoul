/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 14:32:31 by yonghlee          #+#    #+#             */
/*   Updated: 2022/12/25 14:34:55 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string _type)
{
    this->type = _type;
}

Weapon::~Weapon()
{

}

std::string Weapon::getType()
{
    return this->type;
}

void Weapon::setType(std::string _type)
{
    this->type = _type;
}