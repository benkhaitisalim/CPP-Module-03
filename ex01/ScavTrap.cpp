/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 09:20:41 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/28 11:13:36 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap("Default")
{
    std::cout << "ScavTrap Default Constructor Called" << std::endl;
    
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
}

ScavTrap::ScavTrap(std::string Name):ClapTrap(Name)
{
    std::cout << "ScavTrap Constructor Called" << std::endl;
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other):ClapTrap(other.Name)
{
    std::cout << "ScavTrap Copy Constructor Called" << std::endl;
    *this = other;
}
ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "ScavTrap assignment operator Called" << std::endl;
    if(this != &other)
    {
        ClapTrap::operator=(other);
    }
    return *this;
}
void ScavTrap::attack(const std::string& target)
{
    if(EnergyPoints <= 0 || HitPoints <= 0)
    {
        std::cout  << "ScavTrap "<< Name << "can't attacks" << std::endl;
        return ;
    }
    std::cout   << "ScavTrap " << Name 
                << " attacks " << target 
                << ", causing " << AttackDamage 
                << " points of damage!" <<  std::endl;
    EnergyPoints -= 1;
}

void ScavTrap::highFivesGuys(void)
{
    std::cout << "ScavTrap requisting a positive high-fives request " << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor Called" << std::endl;
}

