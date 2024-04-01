/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:36:05 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/06 17:09:09 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    brain = new Brain();
    type = "Cat";
    std::cout << "Cat Class Default Constructor\n";
}

Cat::~Cat()
{
    std::cout << "Cat Class Destroy\n";
    delete brain;
}

Cat::Cat(const Cat& _rhs)
{
    std::cout << "Cat Copy Constructor\n";
    brain = new Brain(*(_rhs.brain));
    type = _rhs.type;
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

void Cat::setIdea(std::string think, int idx)
{
    this->brain->ideas[idx] = think;
}

std::string Cat::getIdea(int idx) const
{
    return (brain->ideas[idx]);
}
