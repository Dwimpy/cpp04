/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:30:24 by arobu             #+#    #+#             */
/*   Updated: 2023/07/04 18:30:25 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure(): AMateria("cure"){}

Cure::~Cure() {}

Cure::Cure(const Cure &copy): AMateria(copy.getType()) {}

Cure &Cure::operator=(const Cure &copy) {
	if (this != &copy)
		this->setType(copy.getType());
	return (*this);
}

void Cure::use(ICharacter &target) {
	std::cout << " heals " << target.getName() << "'s wounds" << std::endl;
}

AMateria *Cure::clone() const {
	return (new Cure());
}
