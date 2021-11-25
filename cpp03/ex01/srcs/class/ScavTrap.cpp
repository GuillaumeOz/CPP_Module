/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:44:59 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/25 21:04:21 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &name)
{
	this->_name = name;
	this->_Hitpoints = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;
	std::cout << "ScavTrap " << this->_name << " has been created" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &ScavTrap)
{
	this->_name = ScavTrap._name;
	this->_Hitpoints = ScavTrap._Hitpoints;
	this->_Energy_points = ScavTrap._Energy_points;
	this->_Attack_damage = ScavTrap._Attack_damage;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " died" << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &right_hand_side)
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

void		ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " have enterred in Gate keeper mode" << std::endl;
}

