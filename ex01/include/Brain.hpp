/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:29:48 by arobu             #+#    #+#             */
/*   Updated: 2023/07/03 19:02:29 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Brain{
		public:
			Brain(void);
			~Brain(void);
			Brain(Brain const &copy);
			Brain	&operator=(Brain const copy);
			std::string	getIdea(int idx) const;
			void		setIdea(int idx, std::string idea);
			Brain		*clone() const;

		private:
			std::string	*_ideas;
};
