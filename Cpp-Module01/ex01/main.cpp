/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 11:33:00 by yonghlee          #+#    #+#             */
/*   Updated: 2022/12/25 11:37:29 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie      *zombie;
    int         zombieNum;
    std::string zombieName;

    std::cout << "Zombie Number : ";
    std::cin >> zombieNum;
    std::cout << "Zombie Name : ";
    std::cin >> zombieName;
    zombie = zombieHorde(zombieNum, zombieName);
    for (int i = 0; i < zombieNum; i++)
    {
        zombie[i].announce();
    }
    delete[] zombie;
}