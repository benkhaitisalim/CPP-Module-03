/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 21:28:10 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/28 11:56:07 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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
    return 0;
}