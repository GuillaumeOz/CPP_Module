/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassCharacter.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:43:29 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/03 21:42:30 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "materia.hpp"

Character::Character(void) {

	std::cout << "Default Character constructor called" << std::endl;
	this->_name = "Unknown";
	for(int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	return ;
}

Character::Character(std::string name) : _name(name)
{
	std::cout << "Name Character constructor called" << std::endl;
	for(int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	return ;
}

Character::Character(const Character &Character) : ICharacter(Character) {

	std::cout << "Copy Character constructor called" << std::endl;
	this->_name = Character.getName();
	return ;
}

Character::~Character(void) {

	std::cout << "Character destructor called" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
	return ;
}

Character	&Character::operator=(const Character &rhs) {

	this->_name = rhs.getName();
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
		this->_inventory[i] = rhs._inventory[i];
	}
	return (*this);
}

std::string const & Character::getName() const {

	return(this->_name);
}

void Character::equip(AMateria* m){

	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << "Materia " << m->getType() << " is equipped at position " << i << std::endl;
			return ;
		}
	}
	std::cout << "You cannot equip Materia " << m->getType() << ", there are no place in inventory" << std::endl;
	return ;
}

void Character::unequip(int idx){

	if (idx < 0 || idx > 3)
	{
		std::cout << "Please choose a position between 0 and 3" << std::endl;
		return ;
	}
	if (this->_inventory[idx] == NULL)
	{
// 		In case we try to equip a Materia in a full inventory, or use/unequip a nonexistent
// Materia, don’t do a thing.
		std::cout << "The place " << idx << " is already free for a Materia !" << std::endl;
		return ;
	}
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target){

	if (idx < 0 || idx > 3)
	{
		std::cout << "Please choose a position between 0 and 3" << std::endl;
		return ;
	}
	if (this->_inventory[idx] == NULL)
	{
// 		In case we try to equip a Materia in a full inventory, or use/unequip a nonexistent
// Materia, don’t do a thing.
		std::cout << "There are no Materia at the place " << idx << std::endl;
		return ;
	}
	this->_inventory[idx]->use(target);
	//remove the materia ?
}
