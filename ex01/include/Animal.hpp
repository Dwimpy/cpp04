/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:49:40 by arobu             #+#    #+#             */
/*   Updated: 2023/06/27 17:43:37 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Animal{
		public:
			Animal(void);
			virtual ~Animal(void);
			Animal(Animal const &copy);
			Animal	&operator=(Animal const &copy);

			virtual std::string	getType(void) const;
			virtual void		makeSound(void) const;
		protected:
			std::string _type;
};
