/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <alehamad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 23:16:54 by alehamad          #+#    #+#             */
/*   Updated: 2026/03/20 23:16:54 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
    public:
    Contact() {};

    void add_contact()
    {
        while (1)
        {
            std::cout << "Type your first name:\n> ";
            if (!std::getline(std::cin, first_name))
            {
                std::cout << "\nEOF detected. Exiting.\n";
                return;
            }
            if (first_name.length() == 0)
            {
                std::cout << "First name cannot be empty. Try again.\n";
                continue;
            }
            break;
        }

        while (1)
        {
            std::cout << "Type your last name:\n> ";
            if (!std::getline(std::cin, last_name))
            {
                std::cout << "\nEOF detected. Exiting.\n";
                return;
            }
            if (last_name.length() == 0)
            {
                std::cout << "Last name cannot be empty. Try again.\n";
                continue;
            }
            break;
        }

        while (1)
        {
            std::cout << "Type your nickname:\n> ";
            if (!std::getline(std::cin, nickname))
            {
                std::cout << "\nEOF detected. Exiting.\n";
                return;
            }
            if (nickname.length() == 0)
            {
                std::cout << "Nickname cannot be empty. Try again.\n";
                continue;
            }
            break;
        }

        while (1)
        {
            std::cout << "Type your phone number:\n> ";
            if (!std::getline(std::cin, phone_number))
            {
                std::cout << "\nEOF detected. Exiting.\n";
                return;
            }
            if (phone_number.length() == 0)
            {
                std::cout << "Phone number cannot be empty. Try again.\n";
                continue;
            }
            break;
        }

        while (1)
        {
            std::cout << "Type your Darkest secret:\n> ";
            if (!std::getline(std::cin, darkest_secret))
            {
                std::cout << "\nEOF detected. Exiting.\n";
                return;
            }
            if (darkest_secret.length() == 0)
            {
                std::cout << "Darkest secret cannot be empty. Try again.\n";
                continue;
            }
            break;
        }
    }

    void print_contact() const
    {
        std::cout << "First name: " << first_name << std::endl;
        std::cout << "Last name: " << last_name << std::endl;
        std::cout << "Nickname: " << nickname << std::endl;
        std::cout << "Phone number: " << phone_number << std::endl;
        std::cout << "Darkest secret: " << darkest_secret << std::endl;
    }

    std::string get_firstname() const { return first_name; }
    std::string get_lastname() const { return last_name; }
    std::string get_nickname() const { return nickname; }

    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
};

#endif