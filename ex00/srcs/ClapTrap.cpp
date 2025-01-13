/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:05:28 by cdutel            #+#    #+#             */
/*   Updated: 2025/01/13 10:54:16 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _Name(name), _Hit_pts(10), _Energy_pts(10), _Attack_dmg(0)
{
	std::cout << "ClapTrap " << name;
	std::cout << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_Name;
	std::cout << " destructor called" << std::endl;
}


/*Operator overload*/
ClapTrap	&ClapTrap::operator=(ClapTrap const &inst)
{
	if (this != &inst)
	{
		this->_Attack_dmg = inst._Attack_dmg;
		this->_Energy_pts = inst._Energy_pts;
		this->_Hit_pts = inst._Hit_pts;
		this->_Name = inst._Name;
	}
	return (*this);
}


/*Public member functions*/
void	ClapTrap::attack(const std::string &target)
{
	if (this->_Hit_pts <= 0)
	{
		std::cout << "ClapTrap " << this->_Name << " is already dead";
		std::cout << std::endl;
		return;
	}
	else if (this->_Energy_pts <= 0)
	{
		std::cout << "ClapTrap " << this->_Name;
		std::cout << " has no energy point left, he cannot attack" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_Name << " attacks " << target;
	std::cout << " causing " << this->_Attack_dmg << " points of damage!";
	std::cout << std::endl;
	this->_Energy_pts--;
	std::cout << "ClapTrap " << this->_Name << " lost 1 energy points, energy points left : ";
	std::cout << this->_Energy_pts << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_Hit_pts <= 0)
	{
		std::cout << "ClapTrap " << this->_Name << " is already dead";
		std::cout << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_Name << " lost " << amount;
	std::cout << " hit points" << std::endl;
	if ((int)this->_Hit_pts - (int)amount >= 0)
		this->_Hit_pts -= amount;
	else
		this->_Hit_pts = 0;
	if (this->_Hit_pts <= 0)
	{
		std::cout << "ClapTrap " << this->_Name << " died" << std::endl;
		return;
	}
	std::cout << "Hit points left : " << this->_Hit_pts << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_Hit_pts <= 0)
	{
		std::cout << "ClapTrap " << this->_Name << " is already dead";
		std::cout << std::endl;
		return;
	}
	else if (this->_Energy_pts <= 0)
	{
		std::cout << "ClapTrap " << this->_Name;
		std::cout << " has no energy point left, he cannot repair his hp" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_Name << " got " << amount;
	std::cout << " of his hit points restaured.";
	this->_Hit_pts+= amount;
	std::cout << " Hit points left : " << this->_Hit_pts << std::endl;
}
