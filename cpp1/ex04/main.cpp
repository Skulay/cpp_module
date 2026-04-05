/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <alehamad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 13:08:43 by alehamad          #+#    #+#             */
/*   Updated: 2026/04/04 13:08:43 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Usage :\n./sedLoser filename s1 s2\n";
        return (1);
    }

    std::string buffer = readFile(av[1]);
    if (buffer.empty())
    {
        std::ifstream test(av[1]);
        if (!test)
        {
            std::cerr << "Error: cannot open file\n";
            return (1);
        }
    }
    std::string s1 = av[2];
    std::string s2 = av[3];

    std::ofstream out((std::string(av[1]) + ".replace").c_str());
    if (!out)
    {
        std::cerr << "Error: cannot create out file\n";
        return (1);
    }
    std::string replaced = ft_replace(buffer, s1, s2);
    out << replaced;
}