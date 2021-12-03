/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassCure.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:18:30 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/03 17:36:18 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "materia.hpp"

Cure::Cure(void) : AMateria("cure") {

	std::cout << "Default Cure constructor called" << std::endl;
	return ;
}

Cure::Cure(const Cure &Cure) : AMateria("cure") {

	std::cout << "Copy Cure constructor called" << std::endl;
	(*this)._type = Cure._type;
	return ;
}

Cure::~Cure(void) {

	std::cout << "Cure destructor called" << std::endl;
	return ;
}

Cure	&Cure::operator=(const Cure &rhs) {

	(*this)._type = rhs._type;
	return (*this);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}

AMateria	*Cure::clone(void) const
{
	return (new Cure(*this));
}
