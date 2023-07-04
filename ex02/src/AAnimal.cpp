/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:52:20 by arobu             #+#    #+#             */
/*   Updated: 2023/06/27 17:11:16 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal(void): _type("AAnimal"){
	std::cout << "AAnimal constructor called." << std::endl;
}

AAnimal::~AAnimal(void){
	delete this->_brain;
	std::cout << "AAnimal deconstructor called." << std::endl;
}

AAnimal::AAnimal(AAnimal const &copy){
	(*this) = copy;
}

AAnimal	&AAnimal::operator=(AAnimal const &copy){
	this->_brain = copy._brain;
	return (*this);
}

const std::string	&AAnimal::getType(void) const{
	return (this->_type);
}

void	AAnimal::makeSound(void) const{
	std::cout << "Random AAnimal sound" << std::endl;
}

void	AAnimal::setBrain(Brain *brain) {
	this->_brain = brain;
}

void 	AAnimal::setType(std::string type) {
	this->_type = type;
}

Brain	&AAnimal::getBrain() const {
	return (*this->_brain);
}

std::string const AAnimal::getIdea(int idx) const {
	if (idx > 0 && idx < 100)
		return (this->_brain)->getIdea(idx);
	std::cout << "Index out of range" << std::endl;
	return (std::string());
}

void	AAnimal::setIdea(int idx, const std::string &idea) {
	if (idx > 0 && idx < 100)
		this->_brain->setIdea(idx, idea);
}