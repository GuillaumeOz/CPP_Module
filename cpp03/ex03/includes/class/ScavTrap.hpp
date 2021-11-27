/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:42:46 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/27 13:34:57 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public :

	ScavTrap(void);
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &cpy);
	~ScavTrap();

	ScavTrap	&operator=(ScavTrap const &right_hand_side);

	void guardGate();

	protected :

	int		_Initial_Energy_points;
};

#endif