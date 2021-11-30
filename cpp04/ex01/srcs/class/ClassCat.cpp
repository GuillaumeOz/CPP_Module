/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:29:24 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/30 21:27:40 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnimalBrain.hpp"

Cat::Cat(void) {

	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat class with a brain has been created" << std::endl;
	return ;
}

Cat::Cat(const Cat &cat) : Animal(cat) {

	this->type = cat.type;
	this->_brain = new Brain(*cat._brain);
	std::cout << "Dog class with a brain has been created by copy" << std::endl;
	return ;
}

Cat::~Cat(void) {

	delete this->_brain;
	std::cout << "Cat class with a brain has been destroy" << std::endl;
	return ;
}

Cat	&Cat::operator=(const Cat &rhs) {

	this->type = rhs.type;
	delete this->_brain;
	this->_brain = new Brain(*(rhs._brain));
	return (*this);
}

Brain	*Cat::getBrain(void) const{

	return (this->_brain);
}

void	Cat::makeSound(void) const{

	std::cout << "Miaou...Miaou...Miaou..." << std::endl;
	return ;
}
