/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <alehamad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 10:56:57 by alehamad          #+#    #+#             */
/*   Updated: 2026/04/01 10:56:57 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main()
{
    int i;
    int n;

    i = 0;
    n = 2;
    Zombie* horde = zombieHorde(n, "sku");
    while (i < n)
    {
        horde[i].announce();
        i++;
    }

    delete[] horde;
    return (0);
}