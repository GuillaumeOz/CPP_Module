/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:30:04 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/30 21:27:45 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnimalBrain.hpp"

Dog::Dog(void) {

	this->type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog class with a brain has been created" << std::endl;
	return ;
}

Dog::Dog(const Dog &Dog) : Animal(Dog) {

	this->type = Dog.type;
	this->_brain = new Brain(*Dog._brain);
	std::cout << "Dog class with a brain has been created by copy" << std::endl;
	return ;
}

Dog::~Dog(void) {

	delete this->_brain;
	std::cout << "Dog class has been destroy" << std::endl;
	return ;
}

Dog	&Dog::operator=(const Dog &rhs) {

	this->type = rhs.type;
	delete this->_brain;
	this->_brain = new Brain(*(rhs._brain));
	return (*this);
}

Brain	*Dog::getBrain(void) const{

	return (this->_brain);
}

void	Dog::makeSound(void) const{

	std::cout << "Wouaf...Wouaf...Wouaf..." << std::endl;
	return ;
}
