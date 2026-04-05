/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <alehamad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 22:20:28 by alehamad          #+#    #+#             */
/*   Updated: 2026/04/05 22:20:28 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        std::cout << "./Harl <level>\n level = DEBUG, INFO, WARNING, ERROR" << std::endl;
        return (1);
    }
    std::string s1 = av[1];
    Harl harl;
    harl.complain(s1);
    return (0);
}