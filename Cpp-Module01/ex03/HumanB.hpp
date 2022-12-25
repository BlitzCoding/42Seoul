/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyonghun <iyonghun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 14:39:08 by yonghlee          #+#    #+#             */
/*   Updated: 2022/12/25 22:58:26 by iyonghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon      weapon;
    public:
        HumanB();
        HumanB(std::string _name);
        ~HumanB();
        void setWeapon(Weapon weapon);
        void attack();
};