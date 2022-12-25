/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 11:19:34 by yonghlee          #+#    #+#             */
/*   Updated: 2022/12/25 11:37:26 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zombie;
    
    zombie = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        std::string str = name + std::to_string(i + 1);
        zombie[i].setZombie(str);
    }
    return zombie;
}