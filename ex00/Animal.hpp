/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:25:08 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/28 14:29:17 by hyungdki         ###   ########.fr       */
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
	Animal(const Animal& origin);
	Animal& operator=(const Animal& origin);
	~Animal();
	void makeSound();
};

#endif