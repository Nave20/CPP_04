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
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat::Cat(&other)" << std::endl;
	this->_type = other._type;
}

Cat &Cat::operator=(Cat const &src)
{
	std::cout << "Cat::operator=(Cat const &src)" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat::~Cat()" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "MIAOUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU" << std::endl;
}
