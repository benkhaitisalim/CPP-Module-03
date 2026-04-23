/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:49:25 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/28 11:14:59 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): Name("Default"), HitPoints(10),EnergyPoints(10),AttackDamage(0)
{
    std::cout << "ClapTrap Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name): Name(Name), HitPoints(10),EnergyPoints(10),AttackDamage(0)
{
    std::cout << "ClapTrap Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "ClapTrap Copy Constructor Called" << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "ClapTrap assignment operator Called" << std::endl;
    if(this != &other)
    {
        Name = other.Name;
        EnergyPoints = other.EnergyPoints;
        HitPoints = other.HitPoints;
        AttackDamage = other.AttackDamage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if(EnergyPoints <= 0 || HitPoints <= 0)
    {
        std::cout  << "ClapTrap "<< Name << "can't attacks!" << std::endl;
        return ;
    }
    std::cout   << "ClapTrap " << Name 
                << " attacks " << target 
                << ", causing " << AttackDamage 
                << " points of damage!" <<  std::endl;
    EnergyPoints -= 1;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout  << "ClapTrap "<< Name << " take damage! " << amount << " damage!" << std::endl;
    if(static_cast <unsigned int>(HitPoints) <= amount)
        HitPoints = 0;
    else 
        HitPoints -= amount; 
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(EnergyPoints == 0)
    {
        std::cout  << "ClapTrap "<< Name << "is dead" << std::endl;
        return ;
    }
    std::cout  << "ClapTrap "<< Name << " is repaired by " << amount << " points" << std::endl;
    EnergyPoints -= 1;
    HitPoints += amount;
}
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor Called" << std::endl;
}
