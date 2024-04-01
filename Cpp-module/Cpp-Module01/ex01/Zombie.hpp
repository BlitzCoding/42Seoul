/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 11:17:52 by yonghlee          #+#    #+#             */
/*   Updated: 2022/12/25 11:32:31 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string.h>

class Zombie
{
    private:
        std::string name;

    public:
        Zombie();
        Zombie(std::string _name);
        ~Zombie();
        void setZombie(std::string _name);
        void announce();
};

Zombie* zombieHorde(int N, std::string name);

#endif