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
	AAnimal	*array[ARRAY_SIZE];

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
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		delete array[i];
	}
}
