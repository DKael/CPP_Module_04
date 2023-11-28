/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:21:48 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/29 00:07:54 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter
{
private:
	Character();

	static const int slotSize = 4;
	std::string name;
	AMateria* slot[slotSize];
	int	itemCnt;

protected:

public:
	Character(const std::string _name);
	Character(const Character& origin);
	Character& operator=(const Character& origin);
	virtual ~Character();
	virtual std::string const &getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

};

#endif
