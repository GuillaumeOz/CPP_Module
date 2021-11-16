/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:16:43 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/16 18:56:18 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _type(NULL)
{
	return ;
}

HumanB::~HumanB()
{
	return ;
}

std::string	HumanB::getName()	const
{
	return (this->_name);
}

bool	HumanB::setWeapon(Weapon &type)
{
	this->_type = &type;
	return (true);
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with his ";
	if (this->_type == NULL)
		std::cout << "own hands... daaaaamn !" << std::endl;
	else
		std::cout << this->_type->getType() << std::endl;
}
