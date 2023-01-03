/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:23:38 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/03 17:23:47 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string _type);
        WrongAnimal(const WrongAnimal& _rhs);
        WrongAnimal& operator=(const WrongAnimal& _rhs);
        ~WrongAnimal();
        
        void makeSound() const;
        std::string getType() const;
};