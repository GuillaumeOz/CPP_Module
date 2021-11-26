/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:17:07 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/26 21:09:18 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->_name = "Unknown";
	this->_Hitpoints = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;
	std::cout << "FragTrap " << this->_name << " has been created" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string const &name)
{
	this->_name = name;
	this->_Hitpoints = 100;
	this->_Energy_points = 100;
	this->_Attack_damage = 30;
	std::cout << "FragTrap " << this->_name << " has been created" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &FragTrap) : ClapTrap(FragTrap)
{
	this->_name = FragTrap._name;
	this->_Hitpoints = FragTrap._Hitpoints;
	this->_Energy_points = FragTrap._Energy_points;
	this->_Attack_damage = FragTrap._Attack_damage;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " died" << std::endl;
	return ;
}

FragTrap	&FragTrap::operator=(FragTrap const &right_hand_side)
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

void		FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->_name << " try to send a high fives to hes friends, but he have not arms..." << std::endl;
}
