/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 20:57:57 by hyungdki          #+#    #+#             */
/*   Updated: 2023/12/06 15:51:01 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	;
}

Ice::Ice(const Ice& origin) : AMateria(origin.type)
{
	*this = origin;
}

void Ice::_copy(const Ice& origin)
{
	type = origin.type;
}

Ice& Ice::operator=(const AMateria& origin)
{
	if (this != &origin)
	{
		try
		{
			_copy(dynamic_cast<const Ice&>(origin));
		}
		catch(std::bad_cast& bc)
		{
			std::cout << "* Cannot assign to Ice class!\n";
		}
	}	
	return *this;
}

Ice& Ice::operator=(const Ice& origin)
{
	if (this != &origin)
		_copy(origin);
	return *this;
}

Ice::~Ice()
{
	;
}

Ice* Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
