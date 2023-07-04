/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:12:30 by arobu             #+#    #+#             */
/*   Updated: 2023/07/03 19:20:27 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void): _type("Dog"){
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog(void){
	std::cout << "Dog deconstructor called" << std::endl;
}

Dog::Dog(Dog const &copy){
	this->_type = copy._type;
}

Dog	&Dog::operator=(Dog const &copy){
	this->_type = copy._type;
	return (*this);
}

std::string	Dog::getType(void) const{
	return (this->_type);
}

void	Dog::makeSound(void) const{
	std::cout << "Bark, bark" << std::endl;
}

