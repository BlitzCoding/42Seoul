/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 14:39:01 by yonghlee          #+#    #+#             */
/*   Updated: 2022/12/27 10:41:07 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon      &weapon;
    public:
        HumanA(std::string _name, Weapon &_weapon);
        ~HumanA();
        void attack();
};