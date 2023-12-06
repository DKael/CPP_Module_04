/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:34:11 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/28 14:45:00 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:

protected:
	void _copy(const WrongCat& origin);

public:
	WrongCat();
	WrongCat(const std::string& _type);
	WrongCat(const WrongCat& origin);
	WrongCat& operator=(const WrongCat& origin);
	//WrongAnimal& operator=(const WrongAnimal& origin);
	~WrongCat();
	void makeSound() const;

};

#endif