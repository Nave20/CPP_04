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

#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Blob")
{
	std::cout << "WrongAnimal::WrongAnimal()" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "WrongAnimal::WrongAnimal(&other)" << std::endl;
	this->_type = other._type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal::~WrongAnimal()" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "WrongAnimal::operator=(const WrongAnimal& other)" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal.mp3" << std::endl;
}

std::string WrongAnimal::getType() const {return this->_type;}