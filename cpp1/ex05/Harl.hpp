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

    void react(std::string status)

	private:

	void debug();
    void infos();
    void warning();
    void error();
};

#endif