/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:36:31 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/03 17:02:36 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string _type);
        Animal(const Animal& _rhs);
        Animal& operator=(const Animal& _rhs);
        virtual ~Animal();
        
        virtual void makeSound() const;
        std::string getType() const;
};