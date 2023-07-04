/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Backpack.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 20:43:44 by arobu             #+#    #+#             */
/*   Updated: 2023/07/04 20:43:45 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Node.hpp"

class Backpack{
		public:
			Backpack();
			~Backpack();
			void addToBackpack(AMateria *materia);
			Node *getFirst();
		private:
			Node *_first;
};