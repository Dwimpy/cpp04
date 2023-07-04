/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:57:53 by arobu             #+#    #+#             */
/*   Updated: 2023/07/03 19:09:57 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

void test(){

	Dog d;
	Dog tmp6;
	tmp6 = d;
	Cat c;
	Cat tmp2 = c;
	Cat cc(c);
	Brain b;
	Brain tmp3;
	Brain bb(b);
	tmp3 = b;
	Dog	tmp4;
	tmp4 = d;
	Dog dd(tmp4);
	Cat tmpc;
	Cat c1(tmpc);
	tmpc = c;

	AAnimal	*(animal_array[10]);

	for (int i = 0; i < 5; i++){
		animal_array[i] = new Cat();
		animal_array[i + 5] = new Dog();
	}
	for (int i = 0; i < 10; i++){
		std::cout << std::endl;
		delete animal_array[i];
	}
	d.makeSound();
	c.makeSound();
	cc.makeSound();
	std::cout << d.getIdea(25) << std::endl;
	std::cout << c.getIdea(25) << std::endl;
	d.setIdea(25, "I'm the baddest motherfucking dog in town");
	c.setIdea(25, "There's a new king in town, pussy");
	std::cout << c.getIdea(25) << std::endl;
	std::cout << d.getIdea(25) << std::endl;
}


int main()
{
	test();
	system("leaks animal");
	return (0);
}