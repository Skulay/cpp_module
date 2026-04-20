/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <alehamad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:20:32 by alehamad          #+#    #+#             */
/*   Updated: 2026/04/20 14:45:53 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	if (!j)
		return (1);
	const Animal* i = new Cat();
	if (!i) {
		delete j;
		return (1);
	}
	
	delete j;
	delete i;

	return (0);
}
