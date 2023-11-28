/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:36:35 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/28 15:19:57 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "[Dog class's default constructor called]\n";
}

Dog::Dog(const std::string& _type) : Animal(_type)
{
	std::cout << "[Dog class's user define constructor called]\n";
}

Dog::Dog(const Dog& origin)
{
	std::cout << "[Dog class's Copy constructor called]\n";
	*this = origin;
}

Dog& Dog::operator=(const Dog& origin)
{
	std::cout << "[Dog class's Copy assignment operator called]\n";
	if (this != &origin)
	{
		type = origin.type;
	}	
	return *this;
}

Dog::~Dog()
{
	std::cout << "[Dog class's Destructor called]\n";
}

void Dog::makeSound() const
{
	std::cout << "WOOF WOOF!\n";
}
