/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <alehamad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 10:55:11 by alehamad          #+#    #+#             */
/*   Updated: 2026/04/01 10:55:11 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
	public:
		Zombie() {};
		Zombie(std::string name);
        void announce();

	private:

		std::string name;
};

Zombie* zombieHorde(int N, std::string givingName);

#endif