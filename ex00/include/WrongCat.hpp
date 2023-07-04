/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:19:23 by arobu             #+#    #+#             */
/*   Updated: 2023/06/27 17:20:01 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
		public:
			WrongCat(void);
			~WrongCat(void);
			WrongCat(WrongCat const &copy);
			WrongCat	&operator=(WrongCat const &copy);

			std::string	getType(void) const;
			void		makeSound(void) const;
		private:
			std::string _type;
};
