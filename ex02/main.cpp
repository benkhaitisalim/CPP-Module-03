/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 21:28:10 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/28 11:18:51 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap a("ClapTrap");
    std::cout << "//===============1=================// \nthis the exemple number 1 :"<< std::endl;
    a.takeDamage(5);
    a.attack("Swilmat");
    a.beRepaired(1);
    ScavTrap c("ScavTrap");
    std::cout << "//================2================// \nthis the exemple number 3 :"<< std::endl;
    c.takeDamage(5);
    c.attack("Swilmat");
    c.beRepaired(1);
    FragTrap b("FragTrap");
    std::cout << "//=================3=================// \nthis the exemple number 2 :"<< std::endl;
    b.takeDamage(5);
    b.attack("Swilmat");
    b.beRepaired(1);
    return 0;
}