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

Cat::Cat(void){
	this->setBrain(new Brain);
	this->setType("Cat");
	for (int i = 0; i < 100; i++){
		this->getBrain().setIdea(i, "Random cat idea");
	}
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat(void){
	std::cout << "Cat deconstructor called" << std::endl;
}

Cat::Cat(Cat const &copy){
	if (this != &copy){
		this->setBrain(copy.getBrain().clone());
		this->setType(copy.getType());
	}
	std::cout << "Cat copy ctor called" << std::endl;
}

Cat	&Cat::operator=(Cat const &copy){
	if (this != &copy)
		this->setType(copy.getType());
	std::cout << "Dog assignemnt operator called" << std::endl;
	return (*this);
}

void	Cat::makeSound(void) const{
	std::cout << "Meaow" << std::endl;
}
