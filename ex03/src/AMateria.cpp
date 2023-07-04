/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:27:49 by arobu             #+#    #+#             */
/*   Updated: 2023/07/04 17:28:15 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const &type): _type(type) {
	std::cout << "Amateria constructor called" << std::endl;
}

AMateria::~AMateria() {};

AMateria::AMateria(const AMateria &copy): _type(copy._type) {}

AMateria &AMateria::operator=(AMateria const &copy) {
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

std::string const &AMateria::getType() const {
	return (this->_type);
}

void AMateria::setType(std::string const &type) {
	this->_type = type;
}
