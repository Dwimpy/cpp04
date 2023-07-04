/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:27:47 by arobu             #+#    #+#             */
/*   Updated: 2023/07/04 17:27:48 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class ICharacter;

class AMateria{
		public:
			AMateria(std::string const &type);
			virtual ~AMateria();
			AMateria(AMateria const &copy);
			AMateria &operator=(AMateria const &copy);
			virtual void use(ICharacter &target) = 0;
			virtual AMateria *clone() const = 0;
			std::string const &getType() const;
		protected:
			void setType(std::string const &type);
		private:
			std::string _type;
};