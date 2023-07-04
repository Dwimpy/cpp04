/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 19:44:12 by arobu             #+#    #+#             */
/*   Updated: 2023/07/04 19:44:13 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() {
	for (int i = 0; i < maxMateria; i++){
		this->_materias[i] = nullptr;
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < maxMateria; i++){
		if (this->_materias[i]){
			delete this->_materias[i];
			this->_materias[i] = nullptr;
		}
	}
}

MateriaSource::MateriaSource(const MateriaSource &copy){
	for (int i = 0; i < maxMateria; i++){
			this->_materias[i] = copy._materias[i] ? copy._materias[i]->clone() : nullptr;
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy) {
	if (this != &copy){
		for (int i = 0; i < maxMateria; i++)
			this->_materias[i] = copy._materias[i] ? copy._materias[i]->clone() : nullptr;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia) {
	this->tryEquip(this->hasEmptySlot(), materia);
}

int MateriaSource::hasEmptySlot() {
	int i;

	for (i = 0; i < maxMateria; i++){
		if (!this->_materias[i])
			return (i);
	}
	std::cout << "MateriaSource cannot learn new spells" << std::endl;
	return (4);
}
void MateriaSource::tryEquip(int idx, AMateria *m) {
	if (idx == 4)
		return ;
	else
		this->_materias[idx] = m;
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < maxMateria; i++){
		if (this->_materias[i] && this->_materias[i]->getType() == type)
			return (this->_materias[i]->clone());
	}
	std::cout << "Materia does not exist." << std::endl;
	return (nullptr);


}