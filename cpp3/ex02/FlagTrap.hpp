/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <alehamad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 00:58:05 by alehamad          #+#    #+#             */
/*   Updated: 2026/04/15 00:58:05 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FlagTrap : public ClapTrap
{
    public:
        FlagTrap(std::string name);
        ~FlagTrap();
        void highFivesGuys(void);
        void attack(const std::string& target);

    private:

};

#endif