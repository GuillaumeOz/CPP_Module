/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:54:11 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/15 20:06:26 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
	
	Zombie();
	~Zombie();

	std::string	get_name( void ) const;

	void	set_name( std::string );

	void	announce( void );

	private:

	std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif