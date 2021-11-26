/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:50:12 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/26 18:23:12 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap clapTrap1("Clap[11-Ox-02]");
	ClapTrap clapTrap2("Clap[22-Jy-14]");

	clapTrap1.attack("Clap[22-Jy-14]");
	clapTrap2.takeDamage(0);
	clapTrap2.attack("Clap[11-Ox-02]");
	clapTrap1.takeDamage(0);

	clapTrap1.beRepaired(2);
	clapTrap2.beRepaired(3);

	return (0);
}