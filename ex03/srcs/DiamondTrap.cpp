/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 14:56:35 by cdutel            #+#    #+#             */
/*   Updated: 2024/12/09 15:20:58 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap()
{
	this->_Hit_pts = FragTrap::_Hit_pts;
	this->_Energy_pts = ScavTrap::_Energy_pts;
	this->_Attack_dmg = FragTrap::_Attack_dmg;
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{
	this->_Name = name;
	this->_Hit_pts = FragTrap::_Hit_pts;
	this->_Energy_pts = ScavTrap::_Energy_pts;
	this->_Attack_dmg = FragTrap::_Attack_dmg;
	std::cout << "DiamondTrap " << this->_Name;
	std::cout << " constructor called" << std::endl;

	std::cout << std::endl;
	std::cout << "HP : " << this->_Hit_pts << std::endl;
	std::cout << "EP : " << this->_Energy_pts << std::endl;
	std::cout << "ATT : " << this->_Attack_dmg << std::endl;
	std::cout << std::endl;

}
