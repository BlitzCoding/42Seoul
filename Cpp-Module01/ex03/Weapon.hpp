/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyonghun <iyonghun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 14:13:00 by yonghlee          #+#    #+#             */
/*   Updated: 2022/12/25 23:01:42 by iyonghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string.h>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon();
        Weapon(std::string _type);
        ~Weapon();
        std::string getType() const;
        void        setType(std::string _type);
};