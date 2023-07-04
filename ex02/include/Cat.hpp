/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:00:05 by arobu             #+#    #+#             */
/*   Updated: 2023/06/27 17:36:59 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal{
		public:
			Cat(void);
			~Cat(void);
			Cat(Cat const &copy);
			Cat	&operator=(Cat const &copy);
			void		makeSound(void) const ;
};
