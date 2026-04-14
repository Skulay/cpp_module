/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <alehamad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 20:59:57 by alehamad          #+#    #+#             */
/*   Updated: 2026/04/14 20:59:57 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string newName) : Name(newName), Hit(10), Energy(10), Attack(0) {
    std::cout << "ClapTrap " << Name << " created" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << Name << " destroyed" << std::endl;
}
    
std::string ClapTrap::GetName() const {
    return (Name);
}
int ClapTrap::GetHit() const {
    return (Hit);
}
int ClapTrap::GetEnergy() const {
    return (Energy);
}
int ClapTrap::GetAttack() const {
    return (Attack);
}

void ClapTrap::SetHit(unsigned int hit) {
    Hit = hit;
}

void ClapTrap::SetEnergy(unsigned int energy) {
    Energy = energy;
}

void ClapTrap::SetAttack(unsigned int attack) {
    Attack = attack;
}

void ClapTrap::attack(const std::string& target) {
    if (Energy == 0) {
        std::cout << "ClapTrap " << Name << " has no energy to attack!" << std::endl;
        return;
    }
    Energy--;
    std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << Attack << " point of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (amount >= Hit)
        Hit = 0;
    else
        Hit -= amount; 
    std::cout << "ClapTrap " << Name << " takes " << amount << " damage ->  " << Hit << "hp" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (Energy == 0) {
        std::cout << "ClapTrap " << Name << " has no energy to repair!" << std::endl;
        return;
    }
    Energy--;
    Hit += amount;
    std::cout << "ClapTrap " << Name << " repair for " << amount << "hp -> " << Hit << "hp" << std::endl;
}