/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:11:36 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/15 18:43:41 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie		*zombies = zombieHorde(5, "Oz");

	for (int i = 0; i < 5; i++)
		zombies[i].announce();
	delete [] zombies;
	return(0);
}
