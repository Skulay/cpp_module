/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <alehamad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 22:21:46 by alehamad          #+#    #+#             */
/*   Updated: 2026/04/05 22:21:46 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>
#include <ostream>

class Harl
{
	public:

        Harl();
        ~Harl();
        void complain(std::string level);


	private:

        void debug();
        void info();
        void warning();
        void error();
};

#endif