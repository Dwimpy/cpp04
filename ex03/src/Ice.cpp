/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:30:27 by arobu             #+#    #+#             */
/*   Updated: 2023/07/04 18:30:28 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {
	std::cout << "Ice constructor called" << std::endl;
}

Ice::~Ice(){
	std::cout << "Ice deconstructor called" << std::endl;
}

Ice::Ice(const Ice &copy): AMateria(copy.getType()) {}

Ice &Ice::operator=(const Ice &copy) {
	if (this != &copy)
		this->setType(copy.getType());
	return (*this);
}

AMateria *Ice::clone() const {
	return (new Ice());
}

void Ice::use(ICharacter &target) {
	std::cout << " shoots an icebolt at " << target.getName() << std::endl;
}