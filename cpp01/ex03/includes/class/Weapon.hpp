/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:58:32 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/16 17:26:39 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	public:

	Weapon(std::string type);
	~Weapon();

	std::string	const	&getType() const;

	bool				setType(std::string const &type);

	private :
	
	std::string _type;
	
};



#endif