/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:36:37 by arobu             #+#    #+#             */
/*   Updated: 2023/07/04 17:36:38 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "AMateria.hpp"

class ICharacter{
		public:
			virtual ~ICharacter(){};
			virtual std::string const &getName() const = 0;
			virtual void equip(AMateria *materia) = 0;
			virtual void unequip(int idx) = 0;
			virtual void use(int idx, ICharacter &target) = 0;
};