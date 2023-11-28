/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:25:09 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/28 14:57:15 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "[WrongAnimal class's default constructor called]\n";
}

WrongAnimal::WrongAnimal(const std::string& _type) : type(_type)
{
	std::cout << "[WrongAnimal class's user define constructor called]\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& origin)
{
	std::cout << "[WrongAnimal class's Copy constructor called]\n";
	*this = origin;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& origin)
{
	std::cout << "[WrongAnimal class's Copy assignment operator called]\n";
	if (this != &origin)
	{
		type = origin.type;
	}	
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal class's Destructor called]\n";
}

std::string WrongAnimal::getType() const
{
	return type;
}

void WrongAnimal::setType(const std::string& _type)
{
	type = _type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "'WrongAnimal'\n";
}
