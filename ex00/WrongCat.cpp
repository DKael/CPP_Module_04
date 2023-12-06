/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:34:57 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/28 14:35:24 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "[WrongCat class's default constructor called]\n";
}

WrongCat::WrongCat(const std::string& _type) : WrongAnimal(_type)
{
	std::cout << "[WrongCat class's user define constructor called]\n";
}

WrongCat::WrongCat(const WrongCat& origin) : WrongAnimal(origin.type)
{
	std::cout << "[WrongCat class's Copy constructor called]\n";
	*this = origin;
}

WrongCat& WrongCat::operator=(const WrongCat& origin)
{
	std::cout << "[WrongCat class's Copy assignment operator called]\n";
	if (this != &origin)
	{
		type = origin.type;
	}	
	return *this;
}

void WrongCat::_copy(const WrongCat& origin)
{
	type = origin.type;
}

// WrongAnimal& WrongCat::operator=(const WrongAnimal& origin)
// {
// 	std::cout << "[WrongCat class's Copy assignment operator called]\n";
// 	if (this != &origin)
// 	{
// 		try
// 		{
// 			_copy(dynamic_cast<const WrongCat&>(origin));
// 		}
// 		catch(std::bad_cast)
// 		{
// 			std::cout << "[Cannot asign to WrongCat class!]\n";
// 		}
// 	}	
// 	return *this;
// }

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat class's Destructor called]\n";
}

void WrongCat::makeSound() const
{
	std::cout << "Meow~\n";
}
