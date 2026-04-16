/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <alehamad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 10:56:48 by alehamad          #+#    #+#             */
/*   Updated: 2026/04/01 10:56:48 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie* zombieHorde(int n, std::string givingName)
{
    int i;

    i = 0;
    Zombie* horde = new Zombie[n];
    while (i < n)
    {
        horde[i].setName(givingName);
        i++;
    }
    return (horde);
}