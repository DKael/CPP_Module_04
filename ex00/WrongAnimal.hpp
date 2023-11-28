/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:25:08 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/28 14:57:18 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
private:

protected:
	std::string type;

public:
	WrongAnimal();
	WrongAnimal(const std::string& _type);
	WrongAnimal(const WrongAnimal& origin);
	WrongAnimal& operator=(const WrongAnimal& origin);
	~WrongAnimal();
	std::string getType() const ;
	void setType(const std::string& _type);
	void makeSound() const;
	
};

#endif