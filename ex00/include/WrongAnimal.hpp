/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:17:44 by arobu             #+#    #+#             */
/*   Updated: 2023/06/27 17:44:43 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class WrongAnimal{
		public:
			WrongAnimal(void);
			virtual ~WrongAnimal(void);
			WrongAnimal(WrongAnimal const &copy);
			WrongAnimal	&operator=(WrongAnimal const &copy);

			virtual std::string	getType(void) const;
			virtual void		makeSound(void) const;
		protected:
			std::string _type;
		private:
};
