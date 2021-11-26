/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:49:52 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/26 21:04:15 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->_name = "Unknown";
	this->_Hitpoints = 10;
	this->_Energy_points = 10;
	this->_Attack_damage = 0;
	std::cout << "ClapTrap " << this->_name << " has been created" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string const &name) : _name(name)
{
	this->_Hitpoints = 10;
	this->_Energy_points = 10;
	this->_Attack_damage = 0;
	std::cout << "ClapTrap " << this->_name << " has been created" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &ClapTrap)
{
	this->_name = ClapTrap._name;
	this->_Hitpoints = ClapTrap._Hitpoints;
	this->_Energy_points = ClapTrap._Energy_points;
	this->_Attack_damage = ClapTrap._Attack_damage;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " died" << std::endl;
	return ;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &right_hand_side)
{
	if (this != &right_hand_side)
	{
		this->_name = right_hand_side._name;
		this->_Hitpoints = right_hand_side._Hitpoints;
		this->_Energy_points = right_hand_side._Energy_points;
		this->_Attack_damage = right_hand_side._Attack_damage;
	}
	return *this;
}

void		ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_Attack_damage << " points of damage!" << std::endl;
	return ;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	this->_Energy_points -= amount;
	std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
	if (this->_Energy_points <= 0)
		std::cout << "ClapTrap " << this->_name << " seem broken..." << std::endl;
	return ;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	this->_Energy_points += amount;
	std::cout << "ClapTrap " << this->_name << " be repaired by " << amount << " health points!" << std::endl;
	if (this->_Energy_points <= 0)
		std::cout << "ClapTrap " << this->_name << " seem still broken..." << std::endl;
	return ;
}
