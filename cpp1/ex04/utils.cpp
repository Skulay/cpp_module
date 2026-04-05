/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <alehamad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 13:29:44 by alehamad          #+#    #+#             */
/*   Updated: 2026/04/05 13:29:44 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string readFile(const std::string& filename)
{
    std::ifstream file(filename.c_str());
    if (!file)
        return ("");

    std::string buffer;
    char c;

    while (file.get(c))
        buffer += c;

    return (buffer);
}

std::string ft_replace(const std::string& buffer, const std::string& s1, const std::string& s2)
{
     std::string result;
    size_t pos = 0;
    size_t found;

    if (s1.empty())
        return (buffer);
    while ((found = buffer.find(s1, pos)) != std::string::npos)
    {
        result += buffer.substr(pos, found - pos);
        result += s2;
        pos = found + s1.length();
    }
    result += buffer.substr(pos);
    return (result);
}
