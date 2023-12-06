/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:34:57 by hyungdki          #+#    #+#             */
/*   Updated: 2023/12/06 14:12:38 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "[Cat class's default constructor called]\n";
}

Cat::Cat(const std::string& _type) : Animal(_type)
{
	std::cout << "[Cat class's user define constructor called]\n";
}

Cat::Cat(const Cat& origin)
{
	std::cout << "[Cat class's Copy constructor called]\n";
	*this = origin;
}

Cat& Cat::operator=(const Cat& origin)
{
	std::cout << "[Cat class's Copy assignment operator called]\n";
	if (this != &origin)
	{
		type = origin.type;
	}	
	return *this;
}

void Cat::_copy(const Cat& origin)
{
	type = origin.type;
}

Animal& Cat::operator=(const Animal& origin)
{
	std::cout << "[Cat class's Copy assignment operator called]\n";
	if (this != &origin)
	{
		try
		{
			_copy(dynamic_cast<const Cat&>(origin));
		}
		catch(std::bad_cast)
		{
			std::cout << "[Cannot asign to Cat class!]\n";
		}
	}	
	return *this;
}

Cat::~Cat()
{
	std::cout << "[Cat class's Destructor called]\n";
}

void Cat::makeSound() const
{
	std::cout << "Meow~\n";
}
