/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyonghun <iyonghun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 21:34:34 by iyonghun          #+#    #+#             */
/*   Updated: 2023/01/07 20:52:48 by iyonghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

# define ARRAY_SIZE 4

int main()
{
	std::cout << "\e[94m*** Test1 ***\e[0m\n";
	{
		Animal *animal_array[ARRAY_SIZE];
		for (int i = 0; i < ARRAY_SIZE / 2; i++)
			animal_array[i] = new Dog();
		for (int i = ARRAY_SIZE / 2; i < ARRAY_SIZE; i++)
			animal_array[i] = new Cat();
		for (int i = 0; i < ARRAY_SIZE; i++)
			delete animal_array[i];
	}
	{
		std::cout << "\n\e[96m*** TEST 2 \e[0m\n";
		Dog a1;
		a1.setIdea("hey this is an idea!", 0);
		a1.setIdea("this is my second idea!", 1);
		Dog a2(a1);
		a2.setIdea("Another idea!", 0);
		std::cout << "\e[95ma1's first idea is \"" << a1.getIdea(0) << "\", and a2's first idea is \"" << a2.getIdea(0) << "\"\e[0m\n";
		std::cout << "\e[95ma1's second idea is \"" << a1.getIdea(1) << "\", and a2's second idea is \"" << a2.getIdea(1) << "\"\e[0m\n";

		Cat c1;
		c1.setIdea("hey this is an idea!", 0);
		c1.setIdea("this is my second idea!", 1);
		Cat c2 = c1;
		c2.setIdea("Another idea!", 0);
		std::cout << "\e[95mc1's first idea is \"" << c1.getIdea(0) << "\", and c2's first idea is \"" << c2.getIdea(0) << "\"\e[0m\n";
		std::cout << "\e[95mc1's second idea is \"" << c1.getIdea(1) << "\", and c2's second idea is \"" << c2.getIdea(1) << "\"\e[0m\n";
	}
	{
		std::cout << "\n\e[96m*** TEST 3***\e[0m\n";
		
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}
}