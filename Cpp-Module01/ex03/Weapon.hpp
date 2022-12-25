/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 14:13:00 by yonghlee          #+#    #+#             */
/*   Updated: 2022/12/25 14:34:50 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        std::string getType();
        void        setType(std::string _type);
}