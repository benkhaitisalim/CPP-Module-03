/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 10:06:32 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/26 16:41:33 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRAVTRAP_HPP
#define SCRAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string Name);
        ScavTrap(const ScavTrap &other);
        ScavTrap& operator=(const ScavTrap &other);
        ~ScavTrap();
        void highFivesGuys(void);
};


#endif 