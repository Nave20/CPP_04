/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpirotti <vpirotti@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   GitHub : @Nave20                                  #+#    #+#             */
/*   28 is the new 42                                 ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

#define ARRAY_SIZE 10

int main()
{
	Animal	*array[ARRAY_SIZE];

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		if (i < ARRAY_SIZE / 2)
			array[i] = new Dog;
		else
			array[i] = new Cat;
	}
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		array[i]->makeSound();
	}
	std::cout << "-------TESTING_DEEP_COPY-------" << std::endl;
	Dog* original = new Dog();
	original->getBrain()->setIdea(0, "Original idea");

	Dog* copy = new Dog(*original);

	copy->getBrain()->setIdea(0, "Copy idea");

	original->getBrain()->getIdea(0);
	copy->getBrain()->getIdea(0);

	delete original;
	delete copy;
	std::cout << "--------------" << std::endl;
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		delete array[i];
	}
}
