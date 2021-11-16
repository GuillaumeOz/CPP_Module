/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:05:07 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/16 17:50:23 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	return ;
}

Weapon::~Weapon()
{
	return ;
}

const	std::string	&Weapon::getType() const
{
	return (this->_type);
}

bool	Weapon::setType(std::string const &type)
{
	if (type.empty())
	{
		std::cout << "Weapon type cannot be empty, setType failed" << std::endl;
		return (false);
	}
	this->_type = type;
	return (true);
}
