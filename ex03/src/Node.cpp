/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Node.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 20:43:47 by arobu             #+#    #+#             */
/*   Updated: 2023/07/04 20:43:48 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include "AMateria.hpp"
#include "Node.hpp"

Node::Node(AMateria *data): _data(data), _next(nullptr) {}

Node::~Node(){
	delete this->_data;
}