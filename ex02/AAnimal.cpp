/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:25:09 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/28 19:04:47 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
	std::cout << "[AAnimal class's default constructor called]\n";
}

AAnimal::AAnimal(const std::string& _type) : type(_type)
{
	std::cout << "[AAnimal class's user define constructor called]\n";
}

AAnimal::AAnimal(const AAnimal& origin)
{
	std::cout << "[AAnimal class's Copy constructor called]\n";
	*this = origin;
}

AAnimal& AAnimal::operator=(const AAnimal& origin)
{
	std::cout << "[AAnimal class's Copy assignment operator called]\n";
	if (this != &origin)
	{
		type = origin.type;
	}	
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "[AAnimal class's Destructor called]\n";
}

std::string AAnimal::getType() const
{
	return type;
}

void AAnimal::setType(const std::string& _type)
{
	type = _type;
}
