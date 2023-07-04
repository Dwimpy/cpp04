/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Backpack.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 20:43:49 by arobu             #+#    #+#             */
/*   Updated: 2023/07/04 20:43:50 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Backpack.hpp"
#include "Node.hpp"
#include <cstddef>

Backpack::Backpack() : _first(nullptr) {}

Backpack::~Backpack() {}

void Backpack::addToBackpack(AMateria *materia) {
	Node *newNode = new Node(materia);
	if (this->_first == nullptr)
		this->_first = newNode;
	else {
		Node *tmp = this->_first;
		while (tmp->_next)
			tmp = tmp->_next;
		tmp->_next = newNode;
	}
}

Node *Backpack::getFirst() {
	return (this->_first);
}