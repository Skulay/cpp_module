/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <alehamad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:20:36 by alehamad          #+#    #+#             */
/*   Updated: 2026/04/15 14:08:52 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal constructor called" << std::endl;
};

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
};

std::string Animal::getType() const {
	return (type);
}

void Animal::makeSound() const {}
