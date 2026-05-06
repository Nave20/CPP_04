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

class AAnimal
{
	public:
		AAnimal();
		AAnimal(std::string const &type);
		AAnimal(const AAnimal &other);
		AAnimal&	operator=(const AAnimal& other);
		virtual ~AAnimal();

		virtual void	makeSound() const;
		std::string	getType() const;

	protected:
		std::string	_type;
};

#endif
