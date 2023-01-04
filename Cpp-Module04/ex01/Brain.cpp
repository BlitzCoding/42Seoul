/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:47:06 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/04 14:02:35 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = "Default Thinking";
    }
    std::cout << "Brain Default constructor\n";
}

Brain::~Brain()
{
	std::cout << "Brain Destructor\n";
}

Brain::Brain(const Brain& brain)
{
	(*this) = brain;
    std::cout << "Brain Copy Constuctor\n";
}

std::string Brain::getIdeas(int idx) 
{
    return this->ideas[idx];
}

void Brain::setIdeas(std::string think)
{
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = think + std::to_string(i);
    }
}

Brain& Brain::operator= (const Brain& brain)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = brain.ideas[i];
	return (*this);
}