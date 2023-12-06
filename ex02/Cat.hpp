/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:34:11 by hyungdki          #+#    #+#             */
/*   Updated: 2023/12/06 15:10:35 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include <typeinfo>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
private:
	Brain* brain;
	
protected:
	virtual void _copy(const Cat& origin);

public:
	Cat();
	Cat(const std::string& _type);
	Cat(const Cat& origin);
	virtual Cat& operator=(const Cat& origin);
	virtual AAnimal& operator=(const AAnimal& origin);
	virtual ~Cat();
	virtual void makeSound() const;
	void think(const std::string _idea);
	void showAllIdea();

};

#endif