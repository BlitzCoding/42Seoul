/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:07:17 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/03 17:12:49 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
    public :  
        Dog();
        ~Dog();
        Dog(const Dog& _rhs);
        Dog &operator=(const Dog& _rhs);
        void makeSound() const;
};