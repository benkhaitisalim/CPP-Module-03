/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:41:35 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/28 10:55:45 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public :
        FragTrap();
        FragTrap(std::string Name);
        FragTrap(const FragTrap &other);
        FragTrap& operator=(const FragTrap &other);
        ~FragTrap();
        void highFivesGuys(void);
};

#endif 
