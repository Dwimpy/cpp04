/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:40:07 by arobu             #+#    #+#             */
/*   Updated: 2023/07/04 17:40:08 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() {
	for (int i = 0; i < maxSlots; i++)
		this->_inventory[i] = nullptr;
}

Character::Character(std::string name): _name(name), _backpack(Backpack()) {
	for (int i = 0; i < maxSlots; i++)
		this->_inventory[i] = nullptr;
}

Character::~Character() {
	for (int i = 0; i < maxSlots; i++){
		if (this->_inventory[i])
		{
			delete this->_inventory[i];
			this->_inventory[i] = nullptr;
		}
	}
	Node *current = _backpack.getFirst();
	while (current != nullptr)
	{
		Node *next = current ->_next;
		delete current;
		current = next;
	}
}

Character::Character(const Character &copy): _name(copy._name), _backpack(copy._backpack) {
	if (this != &copy)
	{
		for (int i = 0; i < maxSlots; i++)
			this->_inventory[i] = copy._inventory[i] ? copy._inventory[i]->clone() : nullptr;
	}
}

Character &Character::operator=(const Character &copy) {
	if (this != &copy)
	{
		this->_name = copy._name;
		for (int i = 0; i < maxSlots; i++)
			this->_inventory[i] = copy._inventory[i] ? copy._inventory[i]->clone() : nullptr;
	}
	return (*this);
}

std::string const &Character::getName() const {
	return (this->_name);
}

void Character::equip(AMateria *materia){
	this->tryEquip(materia);
}

void Character::unequip(int idx) {
	if (this->idxOutOfRange(idx))
		return ;
	else if (this->_inventory[idx])
	{
		this->_backpack.addToBackpack(this->_inventory[idx]);
		this->_inventory[idx] = nullptr;
	}
}

void Character::use(int idx, ICharacter &target) {
	if (this->idxOutOfRange(idx) || isEmptySlot(idx))
		return ;
	std::cout << this->_name;
	this->_inventory[idx]->use(target);
}

bool Character::idxOutOfRange(int idx) {
	if (idx < 0 || idx > 3)
	{
		std::cout << "Index " << idx << " out of range, inventory has 4 slots" << std::endl;
		return (true);
	}
	return (false);
}

bool Character::isEmptySlot(int idx){
	if (!this->_inventory[idx])
	{
		std::cout << "Slot " << idx << " is empty" << std::endl;
		return (true);
	}
	return (false);
}

void Character::tryEquip(AMateria *m) {
	int i;

	for (i = 0; i < maxSlots; i++){
		if (!this->_inventory[i])
			break ;
	}
	if (i >= maxSlots)
	{
		std::cout << "Inventory is full, please unequip before equipping another spell" << std::endl;
		if (m)
			delete m;
	}
	else
	{
		this->_inventory[i] = m;
		std::cout << "Materia " << m->getType() << " equipped in slot " << i << std::endl;
	}
}