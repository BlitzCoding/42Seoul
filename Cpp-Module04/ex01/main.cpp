/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 21:34:34 by iyonghun          #+#    #+#             */
/*   Updated: 2023/01/04 14:12:04 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal *a[4];

    for (int i = 0; i < 2; i++)
    {
        a[i] = new Cat();
    }
    for (int i = 2; i < 4; i++)
    {
        a[i] = new Dog();
    }

    for (int i = 0; i < 4; i++)
    {
        a[i]->makeSound();
    }
}