/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:34:11 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/28 18:38:05 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain* brain;
	
protected:

public:
	Cat();
	Cat(const std::string& _type);
	Cat(const Cat& origin);
	Cat& operator=(const Cat& origin);
	virtual ~Cat();
	virtual void makeSound() const;
	void getIdea(const std::string _idea);
	void showAllIdea();

};

#endif