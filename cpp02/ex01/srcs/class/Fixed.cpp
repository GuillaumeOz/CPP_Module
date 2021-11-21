/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:31:24 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/20 21:36:57 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

/*
**	https://inst.eecs.berkeley.edu//~cs61c/sp06/handout/fixedpt.html
**	note : pow(2, this->_fixed_point) = <binary>100000000 = 256
*/

int Fixed::_nb_fractional_bits = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixed_point = 0;
	return ;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixed_point = value << this->_nb_fractional_bits;
	return;
}

Fixed::Fixed(const float value)
{
	int power = 256;
	std::cout << "Float constructor called" << std::endl;
	this->_fixed_point = roundf(value * power);
	return;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed	&Fixed::operator=(Fixed const &right_hand_side)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &right_hand_side)
			this->_fixed_point = right_hand_side._fixed_point;
	return *this;
}

std::ostream	&operator<<(std::ostream & ostr, Fixed const & instance)
{
	ostr << instance.toFloat();
	return (ostr);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_point);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixed_point = raw;
}

int		Fixed::toInt( void ) const
{
	return (this->_fixed_point >> this->_nb_fractional_bits);
}

float	Fixed::toFloat( void ) const
{
	int		power = 256;
	float	result = (float)this->_fixed_point / power;

	return (result);
}
