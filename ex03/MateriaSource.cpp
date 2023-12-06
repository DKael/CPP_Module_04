/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 23:32:56 by hyungdki          #+#    #+#             */
/*   Updated: 2023/12/06 15:58:55 by hyungdki         ###   ########.fr       */
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
	for (int i = 0; i < MateriaSource::slotSize; i++)
		slot[i] = NULL;
	*this = origin;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& origin)
{
	if (this != &origin)
	{
		for (int i = 0; i < MateriaSource::slotSize; i++)
		{
			delete slot[i];
			if (origin.slot[i])
				slot[i] = origin.slot[i]->clone();
			else
				slot[i] = NULL;
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
	{
		std::cout << "Cannot learn more because slot already full!\n";
		return ;
	}
	if (materia)
	{
		slot[itemCnt] = materia->clone();
		itemCnt++;
	}
	
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < itemCnt; i++)
	{
		if (slot[i] && slot[i]->getType() == type)
			return slot[i]->clone();
	}
	return (AMateria*)0;
}
