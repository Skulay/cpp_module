/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <alehamad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 22:59:48 by alehamad          #+#    #+#             */
/*   Updated: 2026/03/18 22:59:48 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main()
{
    PhoneBook phonebook;
    std::string command;

    while (1)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT):\n> ";
        if (!std::getline(std::cin, command))
        {
            std::cout << "\nCTRL+D detected. Exit." << std::endl;
            break;
        }
        if (command == "ADD")
            phonebook.ADD();
        else if (command == "SEARCH")
            phonebook.SEARCH();
        else if (command == "EXIT")
            break;
        else
            std::cout << "Invalid command" << std::endl;
    }
    return (0);
}