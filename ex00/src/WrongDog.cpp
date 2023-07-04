/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:20:59 by arobu             #+#    #+#             */
/*   Updated: 2023/07/03 19:20:43 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"
#include <iostream>

WrongDog::WrongDog(void): _type("WrongDog"){
	std::cout << "WrongDog constructor called" << std::endl;
}

WrongDog::~WrongDog(void){
	std::cout << "WrongDog deconstructor called" << std::endl;
}

WrongDog::WrongDog(WrongDog const &copy){
	this->_type = copy._type;
}

WrongDog	&WrongDog::operator=(WrongDog const &copy){
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

std::string	WrongDog::getType(void) const{
	return (this->_type);
}

void	WrongDog::makeSound(void) const{
	std::cout << "WrongDog says meaowwww" << std::endl;
}
