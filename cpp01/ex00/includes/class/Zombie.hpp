/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 17:27:36 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/15 16:54:01 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
	
	Zombie(std::string name);
	~Zombie();

	std::string get_name( void ) const;

	void	announce( void );

	private:

	std::string _name;
};

Zombie* newZombie( std::string name );
void	randomChump( std::string name );

#endif