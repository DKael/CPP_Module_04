/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:21:48 by hyungdki          #+#    #+#             */
/*   Updated: 2023/12/06 16:15:59 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string _name)
{
	for (int i = 0; i < Character::slotSize; i++)
		slot[i] = NULL;
	itemCnt = 0;
	name = _name;
}

Character::Character(const Character& origin)
{
	for (int i = 0; i < Character::slotSize; i++)
		slot[i] = NULL;
	*this = origin;
}

Character& Character::operator=(const Character& origin)
{
	if (this != &origin)
	{
		for (int i = 0; i < Character::slotSize; i++)
		{
			delete slot[i];
			if (origin.slot[i])
				slot[i] = origin.slot[i]->clone();
			else
				slot[i] = NULL;
		}
		itemCnt = origin.itemCnt;
		name = origin.name;
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < Character::slotSize; i++)
		delete slot[i];
}

std::string const& Character::getName() const
{
	return name;
}

void Character::equip(AMateria* m)
{
	if (itemCnt > 4)
	{
		std::cout << "Cannot equip because slot already full!\n";
		return ;
	}
	for (int i = 0; i < Character::slotSize; i++)
	{
		if (slot[i] == NULL)
		{
			slot[i] = m;
			itemCnt++;
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if ((idx < 0 || idx > 4))
	{
		std::cout << "out of range!\n";
		return ;
	}
	else if (slot[idx] == NULL)
	{
		std::cout << "Cannot unequip because this slot already blank!\n";
		return ;
	}
	slot[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if ((idx < 0 || idx > 4))
	{
		std::cout << "out of range!\n";
		return ;
	}
	else if (slot[idx] == NULL)
	{
		std::cout << "Cannot use because any materia not equiped in this slot!\n";
		return ;
	}
	(*slot[idx]).use(target);
}

AMateria* Character::getMateria(int idx) const
{
	if ((idx < 0 || idx > 4))
	{
		std::cout << "out of range!\n";
		return NULL;
	}
	else if (slot[idx] == NULL)
	{
		std::cout << "slot already empty!\n";
		return NULL;
	}
	return slot[idx];
}