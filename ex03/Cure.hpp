/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 20:51:02 by hyungdki          #+#    #+#             */
/*   Updated: 2023/12/06 15:17:35 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>
#include <typeinfo>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
private:
	void _copy(const Cure& origin);

protected:

public:
	Cure();
	Cure(const Cure& origin);
	virtual Cure& operator=(const AMateria& origin);
	virtual Cure& operator=(const Cure& origin);
	virtual ~Cure();
	virtual Cure* clone() const;
	virtual void use(ICharacter& target);

};

#endif