/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassMateriaSource.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:33:29 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/03 21:18:32 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "materia.hpp"

// int	MateriaSource::materiaIndex = 0;

MateriaSource::MateriaSource(void) {

	std::cout << "Default MateriaSource constructor called" << std::endl;
	for(int i = 0; i < 4; i++)
		this->_saved[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource &MateriaSource) {

	std::cout << "Copy MateriaSource constructor called" << std::endl;
	(*this) = MateriaSource;
	return ;
}

MateriaSource::~MateriaSource(void) {

	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_saved[i] != NULL)
			delete this->_saved[i];
	}
	return ;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs) {

	for(int i = 0; i < 4; i++)
	{
		if (this->_saved[i] != NULL)
			delete this->_saved[i];
		if (rhs._saved[i] != NULL)
			this->_saved[i] = rhs._saved[i];
		else
			this->_saved[i] = NULL;
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *Materia){

	int i = 0;

	while(i < 4)
	{
		if (this->_saved[i] == NULL)
		{
			this->_saved[i] = Materia;
			std::cout << "Materia " << Materia->getType() << " has been learned !" << std::endl;
			return ;
		}
		i++;	
	}
	std::cout << "We can't learn the Materia " << Materia->getType() << " because there no more free place..." << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const & type) {

	for(int i = 0; i < 4; i++) {

		if (this->_saved[i] != NULL) {

			if (this->_saved[i]->getType() == type)
				return (this->_saved[i]->clone());
		}
	}
	return (NULL);
}
