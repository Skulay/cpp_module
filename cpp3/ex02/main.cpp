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
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int main() {

    // Trappy
    ClapTrap a("Trappy");
    std::cout << "ClapTrap Name: " << a.GetName() << std::endl;
    std::cout << "ClapTrap Hit Points: " << a.GetHit() << std::endl;
    std::cout << "ClapTrap Energy: " << a.GetEnergy() << std::endl;
    std::cout << "ClapTrap Attack: " << a.GetAttack() << std::endl;
    a.attack("Target");
    a.takeDamage(5);
    a.beRepaired(10);

    std::cout << std::endl;

    // Scavy
    ScavTrap b("Scavy");
    std::cout << "ScavTrap Name: " << b.GetName() << std::endl;
    std::cout << "ScavTrap Hit Points: " << b.GetHit() << std::endl;
    std::cout << "ScavTrap Energy: " << b.GetEnergy() << std::endl;
    std::cout << "ScavTrap Attack: " << b.GetAttack() << std::endl;
    b.attack("Target2");
    b.takeDamage(20);
    b.beRepaired(15);
    b.guardGate();

    std::cout << std::endl;

    // Flaggy
    FlagTrap c("Flaggy");
    std::cout << "FlagTrap Name: " << c.GetName() << std::endl;
    std::cout << "FlagTrap Hit Points: " << c.GetHit() << std::endl;
    std::cout << "FlagTrap Energy: " << c.GetEnergy() << std::endl;
    std::cout << "FlagTrap Attack: " << c.GetAttack() << std::endl;
    c.attack("Target2");
    c.takeDamage(20);
    c.beRepaired(15);
    c.highFivesGuys();

    return (0);
}