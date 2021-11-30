/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:29:24 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/30 14:03:25 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Cat::Cat(void) {

	std::cout << "Cat class has been created" << std::endl;
	this->type = "Cat";
	return ;
}

Cat::Cat(const Cat &cat) : Animal(cat) {

	this->type = cat.type;
	return ;
}

Cat::~Cat(void) {

	std::cout << "Cat class has been destroy" << std::endl;
	return ;
}

Cat	&Cat::operator=(const Cat &rhs) {

	this->type = rhs.type;
	return (*this);
}

void	Cat::makeSound(void) const{

	std::cout << "Miaou...Miaou...Miaou..." << std::endl;
	return ;
}
