/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:47:06 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/06 16:34:31 by yonghlee         ###   ########.fr       */
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
    for (int i = 0; i < 100; i++)
        this->ideas[i] = brain.ideas[i];
    std::cout << "Brain Copy Constuctor\n";
}

Brain& Brain::operator= (const Brain& brain)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = brain.ideas[i];
	return (*this);
}