/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:49:22 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/26 18:01:19 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public :

	ClapTrap(void);
	ClapTrap(std::string const &name);
	ClapTrap(ClapTrap const &cpy);
	~ClapTrap();

	ClapTrap	&operator=(ClapTrap const &right_hand_side);

	void		attack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	protected :

	std::string _name;
	int			_Hitpoints;
	int			_Energy_points;
	int			_Attack_damage;

};

#endif