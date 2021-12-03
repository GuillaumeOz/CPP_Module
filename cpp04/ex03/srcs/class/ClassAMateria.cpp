/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAMateria.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 20:07:28 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/03 21:14:12 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "materia.hpp"

AMateria::AMateria(const std::string &type) {

	std::cout << "Name AMateria constructor called" << std::endl;
	this->_type = type;
	return ;
}

AMateria::~AMateria(){

	return ;
}

std::string const & AMateria::getType() const {

	return(this->_type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* Prepares to use a materia on" << target.getName() << std::endl;
}
