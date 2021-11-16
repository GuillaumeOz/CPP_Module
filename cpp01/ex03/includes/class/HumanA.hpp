/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:18:21 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/16 17:27:00 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public:

	HumanA(std::string name, Weapon &type);
	~HumanA();

	std::string		getName() const;
	Weapon	const	&getType() const;

	bool			setType(std::string type);

	void			attack();

	private :

	std::string		_name;
	Weapon			&_type;

};


#endif