/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 14:39:01 by yonghlee          #+#    #+#             */
/*   Updated: 2022/12/25 14:50:56 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        std::string weapon;
    public:
        HumanA();
        HumanA(std::string _name, std::string _weapon);
        ~HumanA();
        void attack();
};