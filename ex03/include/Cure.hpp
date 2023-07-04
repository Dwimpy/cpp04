/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:30:31 by arobu             #+#    #+#             */
/*   Updated: 2023/07/04 18:30:32 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure: public AMateria{
		public:
			Cure();
			~Cure();
			Cure(Cure const &copy);
			Cure &operator=(Cure const &copy);
			void use(ICharacter &target);
			AMateria *clone() const;

};