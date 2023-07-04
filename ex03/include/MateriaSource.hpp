/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 19:45:55 by arobu             #+#    #+#             */
/*   Updated: 2023/07/04 19:45:56 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

static const int maxMateria = 4;

class MateriaSource: public IMateriaSource{
		public:
			MateriaSource();
			~MateriaSource();
			MateriaSource(MateriaSource const &copy);
			MateriaSource &operator=(MateriaSource const &copy);
			void learnMateria(AMateria *materia);
			AMateria *createMateria(std::string const &type);
		private:
			AMateria *_materias[4];

			int	hasEmptySlot();
			void tryEquip(int idx, AMateria *m);
};