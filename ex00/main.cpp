/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:38:09 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/28 17:26:57 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
// #include "WrongAnimal.hpp"
// #include "WrongCat.hpp"

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

	delete meta;
	delete j;
	delete i;

	// const WrongAnimal *Wrongmeta = new WrongAnimal();
	// const WrongAnimal *Wrongi = new WrongCat();

	// std::cout << Wrongi->getType() << " " << std::endl;
	// Wrongi->makeSound();
	// Wrongmeta->makeSound();

	// delete Wrongmeta;
	// delete Wrongi;
	
	return 0;
}
