/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:25:08 by hyungdki          #+#    #+#             */
/*   Updated: 2023/12/06 12:10:34 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
private:

protected:
	std::string type;

public:
	Animal();
	Animal(const std::string& _type);
	Animal(const Animal& origin);
	virtual Animal& operator=(const Animal& origin);
	virtual ~Animal();
	virtual std::string getType() const ;
	virtual void setType(const std::string& _type);
	virtual void makeSound() const;
	
};

#endif