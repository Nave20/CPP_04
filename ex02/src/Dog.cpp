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
	this->_brain = new Brain();
}

Dog::Dog(const Dog &other)
{
	std::cout << "Dog::Dog(&other)" << std::endl;
	this->_type = other._type;
	this->_brain = new Brain(*other._brain);
}

Dog &Dog::operator=(Dog const &src)
{
	std::cout << "Dog::operator=(Dog const &src)" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
		delete this->_brain;
		this->_brain = new Brain(*src._brain);
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog::~Dog()" << std::endl;
	delete this->_brain;
}

void Dog::makeSound() const
{
	std::cout << "WOUFFFFFFFFFFFFFFFFFFFFFFFF" << std::endl;
}

Brain *Dog::getBrain() const { return this->_brain; }