/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:30:29 by arobu             #+#    #+#             */
/*   Updated: 2023/07/04 18:30:30 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Ice: public AMateria{
		public:
			Ice();
			~Ice();
			Ice(Ice const &copy);
			Ice &operator=(Ice const &copy);
			void use(ICharacter &target);
			AMateria *clone() const;
};