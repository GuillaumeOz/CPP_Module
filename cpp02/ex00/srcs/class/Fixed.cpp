/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:31:24 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/18 20:58:11 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

// Membre privés :
// ◦ Un int pour stocker la valeur a point fixe OK
// ◦ Une variable statique constante de type int pour stocker le nombre de bits
// fractionnels. Cette variable vaudra toujours 8. OK

// • Membres publics :
// ◦ Un constructeur par défaut qui initialise la valeur a point fixe à 0 OK

// ◦ Un destructeur. OK

// ◦ Un constructeur par copie. OK

// ◦ Un overload d’opérateur d’assignation.
// ◦ Une fonction membre int getRawBits(void) const; qui renvoie la valeur
// brute du nombre à point fixe.
// ◦ Une fonction membre void setRawBits(int const raw); qui set la valeur
// du nombre à point fixe.

int Fixed::_nb_fractional_bits = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_fix_point = 0;
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed	&Fixed::operator=(Fixed const &right_hand_side)
{
	std::cout << "Assignation operator called" << std::endl;
	*this = right_hand_side;
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	return (this->_fix_point);
}

void	setRawBits(int const raw)
{
	this->_fix_point = raw;
}
