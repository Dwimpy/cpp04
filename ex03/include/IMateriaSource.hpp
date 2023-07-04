/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 19:44:14 by arobu             #+#    #+#             */
/*   Updated: 2023/07/04 19:45:53 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "AMateria.hpp"

class IMateriaSource{
		public:
			virtual ~IMateriaSource(){};
			virtual void learnMateria(AMateria *) = 0;
			virtual AMateria *createMateria(std::string const &) = 0;
};
