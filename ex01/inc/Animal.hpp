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

#ifndef ANIMAL_H
# define ANIMAL_H
#include <string>
#include <iostream>

#include "Brain.hpp"

class Animal
{
	public:
		Animal();
		Animal(std::string const &type);
		Animal(const Animal &other);
		Animal&	operator=(const Animal& other);
		virtual ~Animal();

		virtual void	makeSound() const;
		std::string	getType() const;
	protected:
		std::string	_type;
};

#endif
