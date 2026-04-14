/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <alehamad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 22:12:39 by alehamad          #+#    #+#             */
/*   Updated: 2026/04/14 22:12:39 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    SetHit(100);
    SetEnergy(50);
    SetAttack(20);
    std::cout << "ScavTrap " << GetName() << " created!" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << GetName() << " destroyed" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << GetName() << " is now in Gatekeeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (GetEnergy() == 0) {
        std::cout << "ScavTrap " << GetName() << " has no energy to attack!" << std::endl;
        return;
    }
    SetEnergy(GetEnergy() - 1);
    std::cout << "ScavTrap " << GetName() << " attacks " << target << ", causing " << GetAttack() << " points of damage!" << std::endl;
}