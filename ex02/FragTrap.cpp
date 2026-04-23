/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:41:28 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/28 11:09:00 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap("Default")
{
    std::cout << "FragTrap Default Constractor Called" << std::endl;
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
}
FragTrap::FragTrap(std::string Name):ClapTrap(Name)
{
    std::cout << "FragTrap Constractor Called" << std::endl;
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
}
FragTrap::FragTrap(const FragTrap &other):ClapTrap(other.Name)
{
    std::cout << "FragTrap Copy Constractor Called" << std::endl;
    *this = other;
}
FragTrap& FragTrap::operator=(const FragTrap &other)
{
    std::cout << "FragTrap Assignemt Constrator Called" << std::endl;
    if(this != &other)
    {
        ClapTrap::operator=(other);
    }
    return *this;
}
FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructeur Called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap requisting a positive high-fives request" << std::endl;
}
