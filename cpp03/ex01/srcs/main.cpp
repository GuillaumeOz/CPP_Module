/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:50:12 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/26 21:03:57 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap clapTrap1("Clap[11-Ox-02]");
	ClapTrap clapTrap2("Clap[22-Jy-14]");
	ScavTrap scavTrap1("Scav[52-qh-78]");

	clapTrap1.attack("Clap[22-Jy-14]");
	clapTrap2.takeDamage(0);
	scavTrap1.attack("Clap[11-Ox-02]");
	clapTrap1.takeDamage(20);
	clapTrap2.attack("Scav[52-qh-78]");
	scavTrap1.takeDamage(0);

	scavTrap1.guardGate();

	clapTrap1.beRepaired(5);
	scavTrap1.takeDamage(2);
	clapTrap2.beRepaired(7);

	return (0);
}