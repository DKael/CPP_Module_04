/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:35:57 by hyungdki          #+#    #+#             */
/*   Updated: 2023/12/06 14:41:37 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain* brain;

protected:
	virtual void _copy(const Dog& origin);

public:
	Dog();
	Dog(const std::string& _type);
	Dog(const Dog& origin);
	virtual Dog& operator=(const Dog& origin);
	virtual Animal& operator=(const Animal& origin);
	virtual ~Dog();
	virtual void makeSound() const;
	void think(const std::string _idea);
	void showAllIdea();

};

#endif