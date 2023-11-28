/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:35:57 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/28 18:41:05 by hyungdki         ###   ########.fr       */
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

public:
	Dog();
	Dog(const std::string& _type);
	Dog(const Dog& origin);
	Dog& operator=(const Dog& origin);
	virtual ~Dog();
	virtual void makeSound() const;
	void getIdea(const std::string _idea);
	void showAllIdea();

};

#endif