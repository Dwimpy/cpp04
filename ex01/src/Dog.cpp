/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:12:30 by arobu             #+#    #+#             */
/*   Updated: 2023/07/03 19:13:51 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void): _brain(new Brain), _type("Dog"){
	for (int i = 0; i < 100; i++){
		this->_brain->setIdea(i, "random dog idea");
	}
	std::cout << "Cat constructor called" << std::endl;
}

Dog::~Dog(void){
	std::cout << this->_brain->getIdea(66) << std::endl;
	std::cout << "Dog deconstructor called" << std::endl;
	delete this->_brain;
}

Dog::Dog(Dog const &copy){
	if (this != &copy){
		this->_brain = copy._brain->clone();
		this->_type = copy._type;
	}
}

Dog	&Dog::operator=(Dog const &copy){
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

std::string	Dog::getType(void) const{
	return (this->_type);
}

void	Dog::makeSound(void) const{
	std::cout << "Bark, bark" << std::endl;
}

