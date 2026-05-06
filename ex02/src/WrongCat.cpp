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

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat::WrongCat()" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other)
{
	std::cout << "WrongCat::WrongCat(&other)" << std::endl;
	this->_type = other._type;
}

WrongCat &WrongCat::operator=(WrongCat const &src)
{
	std::cout << "WrongCat::operator=(WrongCat const &src)" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat::~WrongCat()" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "I am not a Cat" << std::endl;
}
