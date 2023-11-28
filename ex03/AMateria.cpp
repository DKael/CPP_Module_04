/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 20:13:41 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/29 00:11:23 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("default")
{
	;
}

AMateria::AMateria(const std::string& _type) : type(_type)
{
	;
}

AMateria::AMateria(const AMateria& origin)
{
	*this = origin;
}

AMateria& AMateria::operator=(const AMateria& origin)
{
	if (this != &origin)
	{
		type = origin.type;
	}	
	return *this;
}

AMateria::~AMateria()
{
	;
}

const std::string& AMateria::getType() const
{
	return type;
}

void AMateria::use(ICharacter& target)
{
	target.getName();
	std::cout << "* base class can't use *\n";
}