/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 21:34:34 by iyonghun          #+#    #+#             */
/*   Updated: 2023/01/08 10:34:37 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

# define ARRAY_SIZE 4

int main()
{
	Animal *c = new Cat();
	Animal *d = new Dog();

	c->makeSound();
	d->makeSound();

	delete d;
	delete c;
}