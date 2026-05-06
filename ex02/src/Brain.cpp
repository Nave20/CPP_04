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

#include "../inc/Brain.hpp"

#include <iostream>
#include <ostream>

Brain::Brain()
{
	std::cout << "Brain::Brain()" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = "Very thoughtful and smart idea.";
	}
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain::Brain(& other)" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = other._ideas[i];
	}
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Brain::operator=()" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
		{
			this->_ideas[i] = other._ideas[i];
		}
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain::~Brain()" << std::endl;
}

void Brain::getIdea(int i) const
{
	if (i < 0 || i > 99)
	{
		std::cout << "Out of bound idea" << std::endl;
		return ;
	}
	else
	{
		std::cout << "Brain::ideas = " << this->_ideas[i] << std::endl;
	}
}

void Brain::setIdea(int i, std::string idea)
{
	if (i < 0 || i > 99)
	{
		std::cout << "Out of bound idea" << std::endl;
		return ;
	}
	else
	{
		this->_ideas[i] = idea;
	}
}