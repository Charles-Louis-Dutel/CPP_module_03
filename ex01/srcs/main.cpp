/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:05:49 by cdutel            #+#    #+#             */
/*   Updated: 2024/11/27 16:31:29 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int	main(void)
{
	ClapTrap	Anakin("Anakin");
	ScavTrap	Obi_wan("Obi-wan");

	std::cout << std::endl;
	Obi_wan.guardGate();
	Obi_wan.guardGate();
	Anakin.attack("Obi-wan");
	std::cout << "\033[34mScavTrap\033[0m Obi-wan is falling" << std::endl;
	Obi_wan.takeDamage(5);
	std::cout << std::endl;

	std::cout << "\033[34mScavTrap\033[0m Obi-wan is healed by the power of the force" << std::endl;
	Obi_wan.beRepaired(4);
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
		Anakin.attack("Obi-wan");
	std::cout << std::endl;

	std::cout << "\033[34mScavTrap\033[0m Obi-wan have the high ground";
	std::cout << std::endl;
	Obi_wan.attack("Anakin");
	Anakin.takeDamage(20);
	std::cout << std::endl;

	return (0);
}
