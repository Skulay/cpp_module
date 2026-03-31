/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <alehamad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 15:09:28 by alehamad          #+#    #+#             */
/*   Updated: 2026/03/27 15:09:28 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>


class PhoneBook
{
	public:

		PhoneBook() : i(0), count(0) {};

		void ADD();
		void SEARCH() const;

	private:

		std::string formatString(const std::string &str) const;

		Contact Contacts[8];
		int i;
		int count;
};

#endif
