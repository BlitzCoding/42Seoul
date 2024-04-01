/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:03:33 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/03 17:12:53 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
    public :  
        Cat();
        ~Cat();
        Cat(const Cat& _rhs);
        Cat &operator=(const Cat& _rhs);
        void makeSound() const;
};