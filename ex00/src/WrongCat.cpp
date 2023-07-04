/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:20:24 by arobu             #+#    #+#             */
/*   Updated: 2023/07/03 19:20:36 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void): _type("WrongCat"){
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat(void){
	std::cout << "WrongCat deconstructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy){
	this->_type = copy._type;
}

WrongCat	&WrongCat::operator=(WrongCat const &copy){
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

std::string	WrongCat::getType(void) const{
	return (this->_type);
}

void	WrongCat::makeSound(void) const{
	std::cout << "WrongCat says bark" << std::endl;
}
