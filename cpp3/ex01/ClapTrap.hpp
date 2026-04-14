/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <alehamad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 20:59:54 by alehamad          #+#    #+#             */
/*   Updated: 2026/04/14 20:59:54 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
    ClapTrap(std::string newName);

    ~ClapTrap();
		
    std::string GetName() const;
    int GetHit() const;
    int GetEnergy() const;
    int GetAttack() const;

    void SetHit(unsigned int hit);
    void SetEnergy(unsigned int energy);
    void SetAttack(unsigned int attack);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

	private:
		std::string Name;
        unsigned int Hit;
        unsigned int Energy;
        unsigned int Attack;

};

#endif