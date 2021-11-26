/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:39:01 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/26 21:21:54 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public :

	DiamondTrap(void);
	DiamondTrap(std::string const &name);
	DiamondTrap(DiamondTrap const &cpy);
	~DiamondTrap();

	DiamondTrap	&operator=(DiamondTrap const &right_hand_side);

	void	whoAmI();
	void	attack(std::string const &target);

	protected:

	std::string _name;

};


#endif