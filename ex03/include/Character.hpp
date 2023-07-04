/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:55:47 by arobu             #+#    #+#             */
/*   Updated: 2023/07/04 17:55:48 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Backpack.hpp"

static const int maxSlots = 4;
static const int maxFloor = 1024;
class Character: public ICharacter{
		public:
			Character();
			Character(std::string name);
			~Character();
			Character(Character const &copy);
			Character &operator=(Character const &copy);
			std::string const &getName() const;
			void equip(AMateria *materia);
			void unequip(int idx);
			void use(int idx, ICharacter &target);

		private:
			std::string _name;
			AMateria	*_inventory[maxSlots];
			Backpack	_backpack;

			bool idxOutOfRange(int idx);
			bool isEmptySlot(int idx);
			void tryEquip(AMateria *m);
};