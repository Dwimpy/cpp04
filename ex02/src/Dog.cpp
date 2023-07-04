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

Dog::Dog(void){
	this->setBrain(new Brain);
	this->setType("Dog");
	for (int i = 0; i < 100; i++){
		this->getBrain().setIdea(i, "random dog idea");
	}
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog(void){
	std::cout << "Dog deconstructor called" << std::endl;
}

Dog::Dog(Dog const &copy){
	if (this != &copy){
		this->setBrain(copy.getBrain().clone());
		this->setType(copy.getType());
	}
	std::cout << "Dog copy ctor called" << std::endl;
}

Dog	&Dog::operator=(Dog const &copy){
	if (this != &copy)
		this->setType(copy.getType());
	std::cout << "Dog assignment operator called" << std::endl;
	return (*this);
}

void	Dog::makeSound(void) const{
	std::cout << "Bark, bark" << std::endl;
}
