/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:21:48 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/28 23:32:31 by hyungdki         ###   ########.fr       */
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
	*this = origin;
}

Character& Character::operator=(const Character& origin)
{
	if (this != &origin)
	{
		for (int i = 0; i < Character::slotSize; i++)
		{
			delete slot[i];
			slot[i] = origin.slot[i];
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

const std::string& Character::getName() const
{
	return name;
}

void Character::equip(AMateria* m)
{
	if (itemCnt > 4)
		return ;
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
	if ((idx < 0 || idx > 4) || slot[idx] == NULL)
		return ;
	slot[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if ((idx < 0 || idx > 4) || slot[idx] == NULL)
		return ;
	(*slot[idx]).use(target);
}
