/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassWrongCat.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:21:23 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/30 21:27:53 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnimalBrain.hpp"

WrongCat::WrongCat(void) {

	std::cout << "WrongCat class has been created" << std::endl;
	this->type = "WrongCat";
	return ;
}

WrongCat::WrongCat(const WrongCat &WrongCat) : WrongAnimal(WrongCat){

	std::cout << "WrongCat class has been created by copy" << std::endl;
	this->type = WrongCat.type;
	return ;
}

WrongCat::~WrongCat(void) {

	std::cout << "WrongCat class has been destroy" << std::endl;
	return ;
}

WrongCat	&WrongCat::operator=(const WrongCat &rhs) {

	this->type = rhs.type;
	return (*this);
}

void	WrongCat::makeSound(void) const {
	
	std::cout << "*WrongCat noise* but no one will ear that... Sad" << std::endl;
	return ;
}

