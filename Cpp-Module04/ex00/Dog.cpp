/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:10:54 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/04 09:51:11 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog Class Default Constructor\n";
}

Dog::~Dog()
{
    std::cout << "Dog Class Destroy\n";
}

Dog::Dog(const Dog& _rhs)
{
    (*this) = _rhs;
}

Dog& Dog::operator=(const Dog& _rhs)
{
    type = _rhs.type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Dog : bark bark bark bark bafkefkpfwklfasdk\n";
}