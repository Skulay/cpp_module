/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <alehamad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 14:43:20 by alehamad          #+#    #+#             */
/*   Updated: 2026/04/01 14:43:20 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n) : name(n), weapon(NULL) {}

void HumanB::setWeapon(Weapon &w)
{
    weapon = &w;
}

void HumanB::attack()
{
    std::cout << name << " attacks with their ";
    if (weapon)
        std::cout << weapon->getType();
    else
        std::cout << "hand";
    std::cout << std::endl;
}