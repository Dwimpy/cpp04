/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:57:53 by arobu             #+#    #+#             */
/*   Updated: 2023/07/03 19:21:46 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

void tests(){
	
	Animal	*ani = new Animal();
	Animal *cat = new Cat();
	Animal *dog = new Dog();

	Dog d;
	Dog tmp(d);
	tmp = d;
	Animal *a(ani);
	Animal *aa;
	aa = a;
	ani->makeSound();
	cat->makeSound();
	dog->makeSound();
	std::cout << ani->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	std::cout << dog->getType() << std::endl;


	std::cout << std::endl << "-------------------" << std::endl << std::endl;
	WrongAnimal	*wani = new WrongAnimal();
	WrongAnimal	*wcat = new WrongCat();
	WrongAnimal	*wdog = new WrongDog();

	WrongAnimal *wa(wani);
	WrongAnimal *waa;
	waa = wa;

	WrongDog *wd = new WrongDog();
	WrongDog *wdd(wd);
	WrongDog *wddd;
	wddd = wd;

	WrongCat *wc = new WrongCat();
	WrongCat *wcc(wc);
	WrongCat *wccc;
	wccc = wc;

	wdd->makeSound();
	wcc->makeSound();
	wani->makeSound();
	wcat->makeSound();
	wdog->makeSound();
	std::cout << wcat->getType() << std::endl;
	std::cout << wdog->getType() << std::endl;
	std::cout << wani->getType() << std::endl;

	std::cout << std::endl << "-------------------" << std::endl << std::endl;
	delete wdog;
	delete wcat;
	delete wani;
	delete dog;
	delete cat;
	delete ani;
	delete wd;
	delete wc;
}

int main()
{
	tests();
	system("leaks animal");
	return (0);
}