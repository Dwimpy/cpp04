/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:18:02 by arobu             #+#    #+#             */
/*   Updated: 2023/06/27 17:21:27 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void): _type("WrongAnimal"){
	std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal(void){
	std::cout << "WrongAnimal deconstructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy){
	(*this) = copy;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &copy){
	this->_type = copy._type;
	return (*this);
}

std::string	WrongAnimal::getType(void) const{
	return (this->_type);
}

void	WrongAnimal::makeSound(void) const{
	std::cout << "Random WrongAnimal sound" << std::endl;
}
