/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:49:40 by arobu             #+#    #+#             */
/*   Updated: 2023/07/03 19:17:59 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "Brain.hpp"

class AAnimal{
		public:
			AAnimal(void);
			virtual ~AAnimal(void);
			AAnimal(AAnimal const &copy);
			AAnimal	&operator=(AAnimal const &copy);

			std::string	const	getIdea(int idx) const;
			void				setIdea(int idx, std::string const &idea);
			virtual void		makeSound(void) const = 0;
		protected:
			void				setBrain(Brain *brain);
			void		 		setType(std::string type);
			const std::string	&getType(void) const;
			Brain				&getBrain() const;
		private:
			Brain		*_brain;
			std::string _type;
};