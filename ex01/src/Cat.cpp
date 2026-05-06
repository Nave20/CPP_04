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

#include "../inc/Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat::Cat()" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat::Cat(&other)" << std::endl;
	this->_type = other._type;
	this->_brain = new Brain(*other._brain);
}

Cat &Cat::operator=(Cat const &src)
{
	std::cout << "Cat::operator=(Cat const &src)" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
		delete this->_brain;
		this->_brain = new Brain(*src._brain);
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat::~Cat()" << std::endl;
	delete this->_brain;
}

void Cat::makeSound() const
{
	std::cout << "MIAOUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU" << std::endl;
}

Brain *Cat::getBrain() const { return this->_brain; }
