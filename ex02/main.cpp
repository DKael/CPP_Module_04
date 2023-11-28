/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:38:09 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/28 21:06:36 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
// #include "WrongAnimal.hpp"
// #include "WrongCat.hpp"

int main()
{
	//AAnimal a;

	AAnimal* meta[10];
	
	for (int i = 0; i < 5; i++)
	{
		meta[i] = new Dog();
		meta[i + 5] = new Cat();
	}

	for (int i = 0; i < 10; i++)
		meta[i]->makeSound();


	dynamic_cast<Dog*>(meta[0])->getIdea("'boring......'");
	Dog choco = *dynamic_cast<Dog*>(meta[0]);
	
	dynamic_cast<Dog*>(meta[0])->getIdea("'go to walk!'");
	choco.getIdea("'play with ball!'");

	dynamic_cast<Dog*>(meta[0])->showAllIdea();
	choco.showAllIdea();
		
	for (int i = 0; i < 10; i++)
		delete meta[i];
	
	system("leaks brain");

	return 0;
}
