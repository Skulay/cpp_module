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

std::string PhoneBook::formatString(const std::string &str) const
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void PhoneBook::ADD()
{
	Contacts[i].add_contact();
	i++;
	if (i == 8)
		i = 0;
	if (count < 8)
		count++;
}

void PhoneBook::SEARCH() const
{
	if (count == 0)
	{
		std::cout << "PhoneBook is empty" << std::endl;
		return;
	}
	std::cout << std::right;
	std::cout << std::setw(10) << "Index" << "|"
				<< std::setw(10) << "First Name" << "|"
				<< std::setw(10) << "Last Name" << "|"
				<< std::setw(10) << "Nickname" << std::endl;
	int index = 0;
	while (index < count)
	{
		std::cout << std::setw(10) << index << "|"
				<< std::setw(10) << formatString(Contacts[index].get_firstname()) << "|"
				<< std::setw(10) << formatString(Contacts[index].get_lastname()) << "|"
				<< std::setw(10) << formatString(Contacts[index].get_nickname()) << std::endl;
		index++;
	}
	std::string input;
	std::cout << "Enter index:\n> ";
	std::getline(std::cin, input);
	if (input.length() != 1 || !isdigit(input[0]))
	{
		std::cout << "Invalid index" << std::endl;
		return;
	}
	index = input[0] - '0';
	if (index < 0 || index >= count)
	{
		std::cout << "Invalid index" << std::endl;
		return;
	}
	Contacts[index].print_contact();
}

