/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 21:28:10 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/28 11:42:03 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("ClapTrap");
    ClapTrap b("ClapTrap");
    b = a;
    std::cout << "//===============1=================// \nthis the exemple number 1 :"<< std::endl;
    a.takeDamage(5);
    a.attack("Swilmat");
    a.beRepaired(1);
    return 0;
}