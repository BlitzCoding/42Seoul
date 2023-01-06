/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:03:33 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/06 17:05:15 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;
    public :  
        Cat();
        ~Cat();
        Cat(const Cat& _rhs);

        Cat &operator=(const Cat& _rhs);

        void        makeSound() const;
        void		setIdea(std::string think, int idx);
	    std::string	getIdea(int idx) const;
};