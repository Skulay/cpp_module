/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <alehamad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 00:58:09 by alehamad          #+#    #+#             */
/*   Updated: 2026/04/15 00:58:09 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap(std::string name) : ClapTrap(name) {
    SetHit(100);
    SetEnergy(50);
    SetAttack(20);
    std::cout << "FlagTrap " << GetName() << " created!" << std::endl;
}

FlagTrap::~FlagTrap() {
    std::cout << "FlagTrap " << GetName() << " destroyed" << std::endl;
}

void FlagTrap::highFivesGuys() {
    std::cout << "FlagTrap " << GetName() << " high-fives request!" << std::endl;
}

void FlagTrap::attack(const std::string& target) {
    if (GetEnergy() == 0) {
        std::cout << "FlagTrap " << GetName() << " has no energy to attack!" << std::endl;
        return;
    }
    SetEnergy(GetEnergy() - 1);
    std::cout << "FlagTrap " << GetName() << " attacks " << target << ", causing " << GetAttack() << " points of damage!" << std::endl;
}