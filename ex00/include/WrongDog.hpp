/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:19:37 by arobu             #+#    #+#             */
/*   Updated: 2023/06/27 17:19:57 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class WrongDog: public WrongAnimal{
		public:
			WrongDog(void);
			~WrongDog(void);
			WrongDog(WrongDog const &copy);
			WrongDog	&operator=(WrongDog const &copy);

			std::string	getType(void) const;
			void		makeSound(void) const;
		private:
			std::string _type;
};

