/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:30:04 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/30 14:48:48 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Dog::Dog(void) {

	std::cout << "Dog class has been created" << std::endl;
	this->type = "Dog";
	return ;
}

Dog::Dog(const Dog &Dog) : Animal(Dog) {

	this->type = Dog.type;
	return ;
}

Dog::~Dog(void) {

	std::cout << "Dog class has been destroy" << std::endl;
	return ;
}

Dog	&Dog::operator=(const Dog &rhs) {

	this->type = rhs.type;
	return (*this);
}

void	Dog::makeSound(void) const{

	std::cout << "Wouaf...Wouaf...Wouaf..." << std::endl;
	return ;
}
