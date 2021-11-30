/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAAnimal.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:50:03 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/30 21:45:58 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnimalPurify.hpp"

AAnimal::~AAnimal(void) {

	std::cout << "Destructor for AAnimal called" << std::endl;
	return;
}

AAnimal&	AAnimal::operator=(const AAnimal &rhs) {

	this->type = rhs.type;
	return (*this);
}

const std::string	&AAnimal::getType(void) const
{
	return (this->type);
}
