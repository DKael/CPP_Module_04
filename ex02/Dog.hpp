/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:35:57 by hyungdki          #+#    #+#             */
/*   Updated: 2023/12/06 15:11:07 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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
	virtual AAnimal& operator=(const AAnimal& origin);
	virtual ~Dog();
	virtual void makeSound() const;
	void think(const std::string _idea);
	void showAllIdea();

};

#endif