/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 20:52:42 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/29 00:20:59 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	;
}

Cure::Cure(const Cure& origin)
{
	*this = origin;
}

void Cure::_copy(const Cure& origin)
{
	type = origin.type;
}

Cure& Cure::operator=(const AMateria& origin)
{
	if (this != &origin)
	{
		try
		{
			_copy(dynamic_cast<const Cure&>(origin));
		}
		catch(std::bad_cast)
		{
			;
		}
	}	
	return *this;
}

Cure& Cure::operator=(const Cure& origin)
{
	if (this != &origin)
		_copy(origin);
	return *this;
}

Cure::~Cure()
{
	;
}

Cure* Cure::clone() const
{
	return new Cure();
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
