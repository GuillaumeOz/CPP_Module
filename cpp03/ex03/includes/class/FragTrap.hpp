/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:14:58 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/27 13:31:12 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public :

	FragTrap(void);
	FragTrap(std::string const &name);
	FragTrap(FragTrap const &cpy);
	~FragTrap();

	FragTrap	&operator=(FragTrap const &right_hand_side);

	void highFivesGuys(void);

	protected :

	int		_Initial_Hitpoints;
	int		_Initial_Attack_damage;
};

#endif