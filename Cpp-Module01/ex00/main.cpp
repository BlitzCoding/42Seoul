/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 10:43:22 by yonghlee          #+#    #+#             */
/*   Updated: 2022/12/27 13:25:50 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie;

    randomChump("Lee");
    zombie = newZombie("Kim");
    zombie->announce();
    delete zombie;
    return (0);
}