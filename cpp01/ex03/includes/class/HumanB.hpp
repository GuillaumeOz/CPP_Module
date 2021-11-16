/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:13:19 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/16 18:54:48 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:

	HumanB(std::string name);
	~HumanB();

	std::string	getName() const;

	bool		setWeapon(Weapon &type);

	void		attack();

	private :

	std::string		_name;
	Weapon			*_type;

};

#endif