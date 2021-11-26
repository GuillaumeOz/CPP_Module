/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:50:12 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/26 21:44:51 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap diamondTrap1("Diamond[00-O0-00]");
	ClapTrap clapTrap1("Clap[11-Ox-02]");
	ClapTrap clapTrap2("Clap[22-Jy-14]");
	ScavTrap scavTrap1("Scav[52-qh-78]");
	FragTrap fragTrap1("Frag[71-OW-82]");

	clapTrap1.attack("Clap[22-Jy-14]");
	clapTrap2.takeDamage(0);
	scavTrap1.attack("Clap[11-Ox-02]");
	clapTrap1.takeDamage(20);
	clapTrap2.attack("Scav[52-qh-78]");
	scavTrap1.takeDamage(0);
	fragTrap1.attack("Scav[52-qh-78]");
	scavTrap1.takeDamage(30);
	diamondTrap1.attack("Frag[71-OW-82]");
	fragTrap1.takeDamage(20);

	scavTrap1.guardGate();
	fragTrap1.highFivesGuys();
	diamondTrap1.whoAmI();
	diamondTrap1.highFivesGuys();
	diamondTrap1.guardGate();

	fragTrap1.beRepaired(4);
	clapTrap1.beRepaired(5);
	scavTrap1.beRepaired(2);
	clapTrap2.beRepaired(7);

	return (0);
}
