/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 17:41:43 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/15 16:47:13 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie		zombie_1("Guillaume");
	Zombie		*zombie_2 = newZombie("Williams");

	zombie_1.announce();
	zombie_2->announce();
	randomChump("Oscar");
	delete zombie_2;
	return(0);
}
