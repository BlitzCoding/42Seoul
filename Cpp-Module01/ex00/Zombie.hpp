/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 10:18:04 by yonghlee          #+#    #+#             */
/*   Updated: 2022/12/25 11:03:59 by yonghlee         ###   ########.fr       */
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
        Zombie(std::string _name);
        ~Zombie();
        void announce();
};

Zombie *newZombie(std::string name);
void    randomChump(std::string name);

#endif