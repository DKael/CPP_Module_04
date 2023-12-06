/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:35:57 by hyungdki          #+#    #+#             */
/*   Updated: 2023/12/06 14:15:05 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include <typeinfo>
#include "Animal.hpp"

class Dog : public Animal
{
private:

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
	
};

#endif