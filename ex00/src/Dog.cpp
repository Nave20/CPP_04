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

#include "../inc/Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog::Dog()" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog &other)
{
	std::cout << "Dog::Dog(&other)" << std::endl;
	this->_type = other._type;
}

Dog &Dog::operator=(Dog const &src)
{
	std::cout << "Dog::operator=(Dog const &src)" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog::~Dog()" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "WOUFFFFFFFFFFFFFFFFFFFFFFFF" << std::endl;
}
