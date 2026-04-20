/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <alehamad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:20:32 by alehamad          #+#    #+#             */
/*   Updated: 2026/04/20 14:45:08 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
	const Animal* meta = new Animal();
	if (!meta)
		return (1);
	const Animal* j = new Dog();
	if (!dog) {
		delete meta;
		return (1);
	}
	const Animal* i = new Cat();
	if (!cat) {
		delete meta;
		delete j;
		return (1);
	}
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
	return (0);
}
