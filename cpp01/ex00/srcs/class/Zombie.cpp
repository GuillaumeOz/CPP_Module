/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:00:08 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/15 18:42:51 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name)
{
	return ;
}

Zombie::~Zombie()
{
	std::cout << this->_name + " is dead" << std::endl;
	return ;
}

std::string Zombie::get_name( void ) const
{
	return (this->_name);
}

void	Zombie::announce(void)
{
	std::cout << this->_name + " BraiiiiiiinnnzzzZ..." << std::endl;
}
