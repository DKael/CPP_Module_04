/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:25:08 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/28 19:04:21 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
private:

protected:
	std::string type;

public:
	AAnimal();
	AAnimal(const std::string& _type);
	AAnimal(const AAnimal& origin);
	virtual AAnimal& operator=(const AAnimal& origin);
	virtual ~AAnimal();
	virtual std::string getType() const ;
	virtual void setType(const std::string& _type);
	virtual void makeSound() const = 0;
	
};

#endif