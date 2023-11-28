/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:25:09 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/28 15:18:50 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "[Animal class's default constructor called]\n";
}

Animal::Animal(const std::string& _type) : type(_type)
{
	std::cout << "[Animal class's user define constructor called]\n";
}

Animal::Animal(const Animal& origin)
{
	std::cout << "[Animal class's Copy constructor called]\n";
	*this = origin;
}

Animal& Animal::operator=(const Animal& origin)
{
	std::cout << "[Animal class's Copy assignment operator called]\n";
	if (this != &origin)
	{
		type = origin.type;
	}	
	return *this;
}

Animal::~Animal()
{
	std::cout << "[Animal class's Destructor called]\n";
}

std::string Animal::getType() const
{
	return type;
}

void Animal::setType(const std::string& _type)
{
	type = _type;
}

void Animal::makeSound() const
{
	std::cout << "'animal is a imaginary thing, just a concept'\n";
}
