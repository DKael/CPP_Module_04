/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:36:35 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/28 14:37:59 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : type("Dog")
{
	std::cout << "[Dog class's default constructor called]\n";
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

void Dog::makeSound()
{
	std::cout << "WOOF WOOF!\n";
}
