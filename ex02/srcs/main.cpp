/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:05:49 by cdutel            #+#    #+#             */
/*   Updated: 2025/01/13 11:11:57 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int	main(void)
{
	ClapTrap	Padme("Padme");
	ScavTrap	Obi_wan("Obi-wan");
	FragTrap	Anakin("Anakin");

	std::cout << std::endl;
	Anakin.highFivesGuys();
	std::cout << "\033[32mClapTrap\033[0m Padme is asking the truth to \033[31mFragTrap\033[0m Anakin" << std::endl;
	Anakin.attack("Padme");
	Padme.takeDamage(30);

	Obi_wan.guardGate();
	Obi_wan.guardGate();
	std::cout << "\033[34mScavTrap\033[0m Obi-wan is falling" << std::endl;
	Obi_wan.takeDamage(5);
	std::cout << std::endl;

	std::cout << "\033[34mScavTrap\033[0m Obi-wan is healed by the power of the force" << std::endl;
	Obi_wan.beRepaired(4);
	std::cout << std::endl;

	std::cout << "\033[34mScavTrap\033[0m Obi-wan have the high ground";
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
	{
		Obi_wan.attack("Anakin");
		Anakin.takeDamage(20);
	}
	std::cout << std::endl;

	return (0);
}
