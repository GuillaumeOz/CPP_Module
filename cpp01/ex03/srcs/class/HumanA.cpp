/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:22:15 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/16 15:40:03 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) : _name(name), _type(type)
{
	return ;
}

HumanA::~HumanA()
{
	return ;
}

std::string		HumanA::getName()	const
{
	return (this->_name);
}

Weapon	const	&HumanA::getType()	const
{
	return (this->_type);
}

void			HumanA::attack()
{
	std::cout << this->_name << " attacks with his ";
	std::cout << this->_type.getType() << std::endl;
}
