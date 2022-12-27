/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 14:39:08 by yonghlee          #+#    #+#             */
/*   Updated: 2022/12/27 10:41:17 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon      *weapon;
    public:
        HumanB();
        HumanB(std::string _name);
        ~HumanB();
        void setWeapon(Weapon &weapon);
        void attack();
};