/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:36:20 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/06 16:31:56 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal Default Constructor\n";
}

Animal::Animal(std::string _type)
{
    this->type = _type;
}

Animal::Animal(const Animal& _rhs)
{
    (*this) = _rhs;
}

Animal &Animal::operator=(const Animal& _rhs)
{
    this->type = _rhs.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal Destory\n";
}

void Animal::makeSound() const
{
    std::cout << "Animal class Sound\n";
}

std::string Animal::getType() const
{
    return this->type;
}