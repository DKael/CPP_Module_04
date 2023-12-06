/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:38:09 by hyungdki          #+#    #+#             */
/*   Updated: 2023/12/06 16:20:45 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int main()
{
	AMateria* ground[100];
	int	ground_idx = 0;
	
	IMateriaSource *src = new MateriaSource();
	AMateria *tmp;

	tmp = new Ice();
	src->learnMateria(tmp);
	delete tmp;

	tmp = new Cure();
	src->learnMateria(tmp);
	delete tmp;

	ICharacter *me = new Character("me");
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	tmp = dynamic_cast<Character*>(me)->getMateria(1);
	if (tmp)
		ground[ground_idx++] = tmp;
	me->unequip(1);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;

	for (int i = 0; i < ground_idx; i++)
		delete ground[i];

	system("leaks character");

	return 0;
}
