/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:12:00 by arobu             #+#    #+#             */
/*   Updated: 2023/06/27 17:36:53 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"
#include <string>

class Dog: public AAnimal{
		public:
			Dog(void);
			~Dog(void);
			Dog(Dog const &copy);
			Dog	&operator=(Dog const &copy);

			void		makeSound(void) const;

};
