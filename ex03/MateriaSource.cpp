/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 23:32:56 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/29 00:02:39 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < MateriaSource::slotSize; i++)
		slot[i] = NULL;
	itemCnt = 0;
}

MateriaSource::MateriaSource(const MateriaSource& origin)
{
	*this = origin;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& origin)
{
	if (this != &origin)
	{
		for (int i = 0; i < MateriaSource::slotSize; i++)
		{
			delete slot[i];
			slot[i] = origin.slot[i];
		}
		itemCnt = origin.itemCnt;
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < MateriaSource::slotSize; i++)
		delete slot[i];
}

void MateriaSource::learnMateria(AMateria* materia)
{
	if (itemCnt > 4)
		return;

	slot[itemCnt] = materia;
	itemCnt++;
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < itemCnt; i++)
	{
		if (slot[i]->getType() == type)
			return slot[i]->clone();
	}
	return (AMateria*)0;
}
