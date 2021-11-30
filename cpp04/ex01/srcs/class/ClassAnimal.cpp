/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:50:03 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/30 21:27:31 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnimalBrain.hpp"

Animal::Animal(void) {

	std::cout << "Animal class has been created" << std::endl;
	this->type = "Unknwon";
	return ;
}

Animal::Animal(const Animal &Animal) {

	std::cout << "Animal class has been created by copy" << std::endl;
	this->type = Animal.type;
	return ;
}

Animal::~Animal(void) {

	std::cout << "Animal class has been destroy" << std::endl;
	return ;
}

Animal	&Animal::operator=(const Animal &rhs) {

	this->type = rhs.type;
	return (*this);
}

const std::string	&Animal::getType(void) const{

	return (this->type);
}

void	Animal::makeSound(void) const{

	std::cout << "Grr...Grr...Grr..." << std::endl;
	return ;
}
