/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:38:09 by hyungdki          #+#    #+#             */
/*   Updated: 2023/12/06 16:29:54 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();

	// *i = *j;
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;

	delete meta;
	delete j;
	delete i;

	const WrongAnimal *Wrongmeta = new WrongAnimal();
	const WrongAnimal *Wrongi = new WrongCat();
	const WrongCat Wcat;
	std::cout << Wrongmeta->getType() << " " << std::endl;
	std::cout << Wrongi->getType() << " " << std::endl;
	Wrongi->makeSound();
	Wrongmeta->makeSound();
	Wcat.makeSound();

	delete Wrongmeta;
	delete Wrongi;
	
	return 0;
}
