/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassIce.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 17:09:45 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/03 17:36:08 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "materia.hpp"

Ice::Ice(void) : AMateria("ice") {

	std::cout << "Default Ice constructor called" << std::endl;
	return ;
}

Ice::Ice(const Ice &Ice) : AMateria("ice") {

	std::cout << "Copy Ice constructor called" << std::endl;
	(*this)._type = Ice._type;
	return ;
}

Ice::~Ice(void) {

	std::cout << "Ice destructor called" << std::endl;
	return ;
}

Ice	&Ice::operator=(const Ice &rhs) {

	(*this)._type = rhs._type;
	return (*this);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria	*Ice::clone(void) const
{
	return (new Ice(*this));
}
