/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:07:17 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/04 14:07:02 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
    public :  
        Dog();
        ~Dog();
        Dog(const Dog& _rhs);

        Dog &operator=(const Dog& _rhs);
        
        void makeSound() const;

        Brain* getBrain();
};