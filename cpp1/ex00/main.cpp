/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <alehamad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 10:10:09 by alehamad          #+#    #+#             */
/*   Updated: 2026/04/01 10:10:09 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main()
{
    std::cout <<"Zombie in the heap" << std::endl;
    Zombie* z = newZombie("Sku");
    z->announce();
    delete z;

    std::cout <<"\nZombie in the Stack" << std::endl;
    randomChump("Foo");

    return (0);
}