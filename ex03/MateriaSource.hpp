/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 23:32:57 by hyungdki          #+#    #+#             */
/*   Updated: 2023/12/06 15:53:05 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	static const int slotSize = 4;
	AMateria* slot[slotSize];
	int	itemCnt;
	
protected:

public:
	MateriaSource();
	MateriaSource(const MateriaSource& origin);
	MateriaSource& operator=(const MateriaSource& origin);
	virtual ~MateriaSource();
	virtual void learnMateria(AMateria* materia);
	virtual AMateria* createMateria(const std::string& type);

};

#endif