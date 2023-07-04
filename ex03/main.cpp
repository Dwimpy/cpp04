/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:57:53 by arobu             #+#    #+#             */
/*   Updated: 2023/07/03 18:48:14 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

void tests(){

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter *bob = new Character("bob");
	ICharacter *lol = new Character("lol");

	Character *d = new Character("d");

	d->equip(src->createMateria("ice"));
	d->equip(src->createMateria("cure"));
	d->equip(src->createMateria("ice"));
	d->equip(src->createMateria("ice"));
	d->equip(src->createMateria("ice"));
	bob->equip(src->createMateria("ice"));
	bob->equip(src->createMateria("ice"));
	bob->equip(src->createMateria("ice"));
	bob->equip(src->createMateria("ice"));
	bob->equip(src->createMateria("ice"));
	bob->equip(src->createMateria("ice"));
	bob->equip(src->createMateria("ice"));
	bob->equip(src->createMateria("ice"));
	Character c = *d;
	Character copycat(*d);
	Character *z = new Character("z");
	Character *cd = new Character("cd");
	Character g;
	cd->equip(src->createMateria("ice"));
	g = *cd;
	g.unequip(0);
	cd->use(0, g);
	g.use(0, g);
	bob->unequip(0);
	bob->unequip(1);
	bob->unequip(2);
	bob->unequip(3);
	bob->unequip(4);
	copycat.unequip(0);
	copycat.unequip(1);
	copycat.unequip(2);
	copycat.unequip(3);
	copycat.unequip(4);
	copycat.use(0, *me);
	c.unequip(0);
	c.unequip(1);
	c.unequip(2);
	c.unequip(3);
	c.unequip(4);
	c.unequip(5);
	d->use(0, *me);
	d->use(1, *bob);
	d->use(2, *lol);
	d->use(3, *lol);
	d->use(4, *lol);

	delete src;
	delete bob;
	delete lol;
	delete me;
	delete d;
	delete z;
	delete cd;
//	delete std;
//	delete john;
}

int main()
{
	tests();
	system("leaks materia");
	return (0);
}