/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:10:54 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/09 13:14:07 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    brain = new Brain();
    std::cout << "Dog Class Default Constructor\n";
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog Class Destroy\n";
}

Dog::Dog(const Dog& _rhs)
{
    std::cout << "Dog Copy Constructor\n";
    brain = new Brain();
    (*this) = _rhs;
}

Dog& Dog::operator=(const Dog& _rhs)
{
    std::cout << "Dog assign\n";
    type = _rhs.type;
    *(this->brain) = *(_rhs.brain);
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Dog : bark bark bark bark bafkefkpfwklfasdk\n";
}

void Dog::setIdea(std::string think, int idx)
{
    this->brain->ideas[idx] = think;
}

std::string Dog::getIdea(int idx) const
{
    return (brain->ideas[idx]);
}
