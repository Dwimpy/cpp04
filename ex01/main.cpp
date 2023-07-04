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

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

void test(){
	Animal aa;
	Animal ta(aa);
	ta = aa;
	Dog d;
	Dog tmp = d;
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

	Animal	*(animal_array[10]);

	for (int i = 0; i < 5; i++){
		animal_array[i] = new Cat();
		animal_array[i + 5] = new Dog();
	}
	for (int i = 0; i < 10; i++){
		delete animal_array[i];
	}
}


int main()
{
	test();
	system("leaks animal");
}