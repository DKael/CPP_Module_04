/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:34:11 by hyungdki          #+#    #+#             */
/*   Updated: 2023/12/06 14:41:25 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include <typeinfo>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
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
	virtual Animal& operator=(const Animal& origin);
	virtual ~Cat();
	virtual void makeSound() const;
	void think(const std::string _idea);
	void showAllIdea();

};

#endif