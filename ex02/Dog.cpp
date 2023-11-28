/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:36:35 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/28 19:07:11 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
	std::cout << "[Dog class's default constructor called]\n";
	brain = new Brain();

}

Dog::Dog(const std::string& _type) : AAnimal(_type)
{
	std::cout << "[Dog class's user define constructor called]\n";
	brain = new Brain();

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
		delete brain;
		brain = new Brain(*(origin.brain));
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

void Dog::getIdea(const std::string _idea)
{
	(*brain).memorize(_idea);
}

void Dog::showAllIdea()
{
	for (int i = 0; i < (*brain).getIdeaCnt() ;i++)
		std::cout << (*brain).getIdea(i) << '\n';
}
