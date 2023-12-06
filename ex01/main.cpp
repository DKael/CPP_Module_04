/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:38:09 by hyungdki          #+#    #+#             */
/*   Updated: 2023/12/06 16:35:08 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal* meta[10];
	
	for (int i = 0; i < 5; i++)
	{
		meta[i] = new Dog();
		meta[i + 5] = new Cat();
	}

	for (int i = 0; i < 10; i++)
		meta[i]->makeSound();


	dynamic_cast<Dog*>(meta[0])->think("'boring......'");
	Dog choco = *dynamic_cast<Dog*>(meta[0]);
	
	dynamic_cast<Dog*>(meta[0])->think("'go to walk!'");
	choco.think("'play with ball!'");

	dynamic_cast<Dog*>(meta[0])->showAllIdea();
	choco.showAllIdea();

	dynamic_cast<Cat*>(meta[5])->think("'purring......'");
	Cat tony = *dynamic_cast<Cat*>(meta[5]);
	
	dynamic_cast<Cat*>(meta[5])->think("'sleepy......'");
	tony.think("'warm.......'");

	dynamic_cast<Cat*>(meta[5])->showAllIdea();
	tony.showAllIdea();
		
	for (int i = 0; i < 10; i++)
		delete meta[i];
	
	system("leaks brain");

	return 0;
}
