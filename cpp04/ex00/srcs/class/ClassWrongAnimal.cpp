/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassWrongAnimal.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:08:22 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/30 14:43:00 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

WrongAnimal::WrongAnimal(void) {

	std::cout << "WrongAnimal class has been created" << std::endl;
	this->type = "Wrong Unknwon...";
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &WrongAnimal) {

	this->type = WrongAnimal.type;
	return ;
}

WrongAnimal::~WrongAnimal(void) {

	std::cout << "WrongAnimal class has been destroy" << std::endl;
	return ;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &rhs) {

	this->type = rhs.type;
	return (*this);
}

const std::string	&WrongAnimal::getType(void) const {

	return (this->type);
}

void	WrongAnimal::makeSound(void) const {

	std::cout << "Some Unknown not animal noise" << std::endl;
	return ;
}