/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyonghun <iyonghun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 18:09:29 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/02 20:32:54 by iyonghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
    protected:
        std::string name;
        unsigned int hitPoint;
        unsigned int energyPoint;
        unsigned int attackDamage;
    public:
        ClapTrap();
        ClapTrap(std::string _name);
        ClapTrap(const ClapTrap& _rhs);
        virtual ~ClapTrap();

        ClapTrap& operator=(const ClapTrap& _rhs);
        
        void attack(const std::string& _target);
        void takeDamage(unsigned int _amount);
        void beRepaired(unsigned int _amount);

        void printStat();
};