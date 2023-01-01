/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyonghun <iyonghun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 19:41:34 by iyonghun          #+#    #+#             */
/*   Updated: 2023/01/01 20:11:42 by iyonghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
    public:
        ScavTrap();
        ScavTrap(std::string _name);
        ScavTrap(const ScavTrap& _rhs);
        ~ScavTrap();
        
        ScavTrap& operator=(const ScavTrap& rhs);

        void guardGate();
        void attack(std::string const& _target);
};