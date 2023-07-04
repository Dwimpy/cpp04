/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:02:17 by arobu             #+#    #+#             */
/*   Updated: 2023/07/03 19:15:21 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void): _brain(new Brain), _type("Cat"){
	for (int i = 0; i < 100; i++){
		this->_brain->setIdea(i, "random cat idea");
	}
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat(void){
	std::cout << this->_brain->getIdea(25) << std::endl;
	delete this->_brain;
	std::cout << "Cat deconstructor called" << std::endl;
}

Cat::Cat(Cat const &copy){
	if (this != &copy){
		this->_brain = copy._brain->clone();
		this->_type = copy._type;
	}
}

Cat	&Cat::operator=(Cat const &copy){
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

std::string	Cat::getType(void) const{
	return (this->_type);
}

void	Cat::makeSound(void) const{
	std::cout << "Meaow" << std::endl;
}
