/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassMateriaSource.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:33:29 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/01 20:06:05 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "materia.hpp"

int	MateriaSource::materiaIndex = 0;

MateriaSource::MateriaSource(void) {

	this->saved = new AMateria[4];
	
	return ;
}

MateriaSource::MateriaSource(const MateriaSource &MateriaSource) : IMateriaSource(MateriaSource) {

	this->saved = new AMateria[4];
	for (int i = 0; i < 4: i++)
		
	return ;
}

MateriaSource::~MateriaSource(void) {

	delete [] this->saved;
	return ;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs) {


	return (*this);
}


		// void learnMateria(AMateria*);
		// AMateria* createMateria(std::string const & type);
		// void use(ICharacter& target);