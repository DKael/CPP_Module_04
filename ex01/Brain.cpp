/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:29:44 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/28 18:54:29 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : idea_cnt(0), cur_idea(-1)
{
	std::cout << "[Brain class's default constructor called]\n";
}

Brain::Brain(const Brain& origin)
{
	std::cout << "[Brain class's Copy constructor called]\n";
	*this = origin;
}

Brain& Brain::operator=(const Brain& origin)
{
	std::cout << "[Brain class's Copy assignment operator called]\n";
	if (this != &origin)
	{
		idea_cnt = origin.idea_cnt;
		cur_idea = origin.cur_idea;
		for (int i = 0; i < origin.idea_cnt; i++)
			ideas[i] = origin.ideas[i];
	}	
	return *this;
}

Brain::~Brain()
{
	std::cout << "[Brain class's Destructor called]\n";
}

std::string Brain::getIdea(int _idx)
{
	if (0 <= _idx && _idx < idea_cnt)
		return ideas[_idx];
	else
		return "mollu?";
}

void Brain::setIdea(int _idx, std::string _idea)
{
	if (0 < _idx && _idx < idea_cnt)
		ideas[_idx] = _idea;
}

void Brain::memorize(std::string _idea)
{
	if (idea_cnt < 100)
		idea_cnt++;
	cur_idea = (cur_idea + 1) % 100;
	ideas[cur_idea] = _idea;
}

int Brain::getIdeaCnt()
{
	return idea_cnt;
}
