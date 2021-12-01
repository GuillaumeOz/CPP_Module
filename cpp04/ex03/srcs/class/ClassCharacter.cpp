/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassCharacter.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:43:29 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/01 19:00:50 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "materia.hpp"

Character::Character(void) {

	this->name = "Unknown";
	return ;
}

Character::Character(const Character &Character) : ICharacter(Character) {

	this->name = Character.getName();
	return ;
}

Character::~Character(void) {

	return ;
}

Character	&Character::operator=(const Character &rhs) {

	this->name = rhs.getName();
	return (*this);
}

std::string const & Character::getName() const{

	return(this->getName());
}

void	Character::equip(AMateria* m){

	
}
