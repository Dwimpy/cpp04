/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:02:17 by arobu             #+#    #+#             */
/*   Updated: 2023/07/03 19:20:19 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void): _type("Cat"){
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat(void){
	std::cout << "Cat deconstructor called" << std::endl;
}

Cat::Cat(Cat const &copy){
	this->_type = copy._type;
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
