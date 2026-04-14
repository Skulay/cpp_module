/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <alehamad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 20:59:51 by alehamad          #+#    #+#             */
/*   Updated: 2026/04/14 20:59:51 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {

    ClapTrap a("Trappy");


    std::cout << "ClapTrap Name: " << a.GetName() << std::endl;
    std::cout << "ClapTrap Hit Points: " << a.GetHit() << std::endl;
    std::cout << "ClapTrap Energy: " << a.GetEnergy() << std::endl;
    std::cout << "ClapTrap Attack: " << a.GetAttack() << std::endl;


    a.attack("Target");
    a.takeDamage(5);
    a.beRepaired(10);

    return (0);
}