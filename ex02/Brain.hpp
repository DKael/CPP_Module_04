/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:29:41 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/28 21:06:13 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
private:

protected:
	std::string ideas[100];
	int idea_cnt;
	int cur_idea;

public:
	Brain();
	Brain(const Brain& origin);
	Brain& operator=(const Brain& origin);
	virtual ~Brain();
	std::string getIdea(int _idx);
	void setIdea(int _idx, std::string _idea);
	void memorize(std::string _idea);
	int getIdeaCnt();

};

#endif