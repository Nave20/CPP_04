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

Animal::Animal() : _type("Blob")
{
	std::cout << "Animal::Animal()" << std::endl;
}

Animal::Animal(std::string const &type) : _type(type)
{
	std::cout << "Animal::Animal()" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal::Animal(&other)" << std::endl;
	this->_type = other._type;
}

Animal::~Animal()
{
	std::cout << "Animal::~Animal()" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal::operator=(const Animal& other)" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "Animal.mp3" << std::endl;
}

std::string Animal::getType() const {return this->_type;}
