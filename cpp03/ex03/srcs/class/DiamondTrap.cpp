/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:39:31 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/26 21:48:06 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	this->_name = "Unknown_clap_name";
	this->_Hitpoints = FragTrap::_Hitpoints;
	this->_Energy_points = ScavTrap::_Energy_points;
	this->_Attack_damage = FragTrap::_Attack_damage;
	std::cout << "DiamondTrap " << "Unknown" << " has been created" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string const &name)
{
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_Hitpoints = FragTrap::_Hitpoints;
	this->_Energy_points = ScavTrap::_Energy_points;
	this->_Attack_damage = FragTrap::_Attack_damage;
	std::cout << "DiamondTrap " << this->_name << " has been created" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &DiamondTrap) : ClapTrap(DiamondTrap) ,FragTrap(DiamondTrap), ScavTrap(DiamondTrap)
{
	this->_name = DiamondTrap._name;
	this->_Hitpoints = DiamondTrap._Hitpoints;
	this->_Energy_points = DiamondTrap._Energy_points;
	this->_Attack_damage = DiamondTrap._Attack_damage;
	return ;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " died" << std::endl;
	return ;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &right_hand_side)
{
	if (this != &right_hand_side)
	{
		this->_name = right_hand_side._name;
		this->_Hitpoints = right_hand_side._Hitpoints;
		this->_Energy_points = right_hand_side._Energy_points;
		this->_Attack_damage = right_hand_side._Attack_damage;
	}
	return (*this);
}

void		DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void		DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap introduces himself :" << std::endl;
	std::cout << "My name is : " << this->_name << " son of " << ClapTrap::_name << std::endl;
}
