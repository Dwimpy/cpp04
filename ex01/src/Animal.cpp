/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:52:20 by arobu             #+#    #+#             */
/*   Updated: 2023/06/27 17:11:16 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void): _type("Animal"){
	std::cout << "Animal constructor called." << std::endl;
}

Animal::~Animal(void){
	std::cout << "Animal deconstructor called." << std::endl;
}

Animal::Animal(Animal const &copy){
	std::cout << "Animal copy ctor called." << std::endl;
	(*this) = copy;
}

Animal	&Animal::operator=(Animal const &copy){
	std::cout << "Animal assignment op called." << std::endl;
	this->_type = copy._type;
	return (*this);
}

std::string	Animal::getType(void) const{
	return (this->_type);
}

void	Animal::makeSound(void) const{
	std::cout << "Random animal sound" << std::endl;
}
