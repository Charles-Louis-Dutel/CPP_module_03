/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:05:49 by cdutel            #+#    #+#             */
/*   Updated: 2024/11/20 17:57:32 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Obi_wan("Obi-wan");
	ClapTrap	Anakin("Anakin");

	std::cout << std::endl;
	Obi_wan.attack("Anakin");
	Anakin.takeDamage(0);
	Anakin.attack("Obi-wan");
	std::cout << "ClapTrap Obi-wan is falling" << std::endl;
	Obi_wan.takeDamage(5);
	std::cout << std::endl;

	std::cout << "ClapTrap Obi-wan is healed by the power of the force" << std::endl;
	Obi_wan.beRepaired(4);
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
		Anakin.attack("Obi-wan");
	std::cout << std::endl;

	std::cout << "ClapTrap Obi-wan have the high ground and ClapTrap Anakin try to swim in lava";
	std::cout << std::endl;
	for (int i = 0; i < 2; i++)
		Anakin.takeDamage(5);
	Anakin.attack("Obi-wan");
	std::cout << std::endl;

	return (0);
}
