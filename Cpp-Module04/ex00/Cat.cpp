/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:36:05 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/04 09:49:09 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat Class Default Constructor\n";
}

Cat::~Cat()
{
    std::cout << "Cat Class Destroy\n";
}

Cat::Cat(const Cat& _rhs)
{
    (*this) = _rhs;
}

Cat& Cat::operator=(const Cat& _rhs)
{
    type = _rhs.type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Cat : meowwwwwwwwwwwwwww\n";
}