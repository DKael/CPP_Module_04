/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:36:35 by hyungdki          #+#    #+#             */
/*   Updated: 2023/12/06 14:55:52 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "[Dog class's default constructor called]\n";
	brain = new Brain();

}

Dog::Dog(const std::string& _type) : Animal(_type)
{
	std::cout << "[Dog class's user define constructor called]\n";
	brain = new Brain();

}

Dog::Dog(const Dog& origin) : brain(0)
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
		delete brain;
		brain = new Brain(*(origin.brain));
	}	
	return *this;
}

void Dog::_copy(const Dog& origin)
{
	type = origin.type;
	delete brain;
	brain = new Brain(*(origin.brain));
}

Animal& Dog::operator=(const Animal& origin)
{
	std::cout << "[Dog class's Copy assignment operator called]\n";
	if (this != &origin)
	{
		try
		{
			_copy(dynamic_cast<const Dog&>(origin));
		}
		catch(std::bad_cast)
		{
			std::cout << "[Cannot asign to Dog class!]\n";
		}
	}	
	return *this;
}

Dog::~Dog()
{
	std::cout << "[Dog class's Destructor called]\n";
	delete brain;
}

void Dog::makeSound() const
{
	std::cout << "WOOF WOOF!\n";
}

void Dog::think(const std::string _idea)
{
	(*brain).memorize(_idea);
}

void Dog::showAllIdea()
{
	for (int i = 0; i < (*brain).getIdeaCnt() ;i++)
		std::cout << (*brain).getIdea(i) << '\n';
}
