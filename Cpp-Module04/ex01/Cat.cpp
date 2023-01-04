/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:36:05 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/04 14:06:19 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    brain = new Brain();
    std::cout << "Cat Class Default Constructor\n";
}

Cat::~Cat()
{
    std::cout << "Cat Class Destroy\n";
}

Cat::Cat(const Cat& _rhs)
{
    std::cout << "Cat Copy Constructor\n";
    brain = new Brain();
    (*this) = _rhs;
}

Cat& Cat::operator=(const Cat& _rhs)
{
    std::cout << "Cat assign\n";
    type = _rhs.type;
    *(this->brain) = *(_rhs.brain);
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Cat : meowwwwwwwwwwwwwww\n";
}

Brain *Cat::getBrain()
{
    return this->brain;
}
