/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:33:03 by arobu             #+#    #+#             */
/*   Updated: 2023/07/03 19:16:08 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <string>

Brain::Brain(void): _ideas(new std::string[100]){
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain(void){
	delete [] this->_ideas;
	std::cout << "Brain deconstructor called" << std::endl;
}

Brain::Brain(Brain const &copy): _ideas(new std::string[100]){
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = copy._ideas[i];
	}
}

Brain	&Brain::operator=(Brain const &copy){
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = copy._ideas[i];
	}
	return (*this);
}

std::string	Brain::getIdea(int idx) const
{
	if (idx > 0 && idx < 100)
		return (this->_ideas[idx]);
	std::cout << "Index out of range " << std::endl;
	return (std::string());
}

void	Brain::setIdea(int idx, std::string const &idea)
{
	if (idx > 0 && idx < 100)
		this->_ideas[idx] = idea;
}

Brain	*Brain::clone() const{
	Brain *new_brain = new Brain();
	for (int i = 0; i < 100; i++){
		new_brain->_ideas[i] = this->_ideas[i];
	}
	return (new_brain);
}