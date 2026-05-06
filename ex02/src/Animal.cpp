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

AAnimal::AAnimal() : _type("Blob")
{
	std::cout << "AAnimal::AAnimal()" << std::endl;
}

AAnimal::AAnimal(std::string const &type) : _type(type)
{
	std::cout << "AAnimal::AAnimal()" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
	std::cout << "AAnimal::AAnimal(&other)" << std::endl;
	this->_type = other._type;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal::~AAnimal()" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	std::cout << "AAnimal::operator=(const AAnimal& other)" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

void AAnimal::makeSound() const
{
	std::cout << "AAnimal.mp3" << std::endl;
}

std::string AAnimal::getType() const {return this->_type;}