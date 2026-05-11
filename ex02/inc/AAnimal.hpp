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

#ifndef AANIMAL_H
# define AANIMAL_H
#include <string>
#include <iostream>

#include "Brain.hpp"

class AAnimal
{
	public:
		AAnimal();
		AAnimal(std::string const &type);
		AAnimal(const AAnimal &other);
		AAnimal&	operator=(const AAnimal& other);
		virtual ~AAnimal();

		virtual void	makeSound() const = 0;
		std::string	getType() const;
		virtual Brain* getBrain() const = 0;
	protected:
		std::string	_type;
};

#endif
