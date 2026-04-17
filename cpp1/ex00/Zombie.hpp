/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <alehamad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 10:10:20 by alehamad          #+#    #+#             */
/*   Updated: 2026/04/01 10:10:20 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
        void announce();

	private:
		std::string name;
};

	Zombie* newZombie(std::string name);
	void randomChump(std::string name);

#endif