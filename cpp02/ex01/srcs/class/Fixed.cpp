/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:31:24 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/19 20:59:10 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath> //roundf()

int Fixed::_nb_fractional_bits = 30;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixed_point = 0;
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed( const int value )
{
	std::cout << "Constant integer constructor called" << std::endl;
	this->_fixed_point = value << this->_nb_fractional_bits;
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
	{
		if (getRawBits() != right_hand_side._fixed_point)
			this->_fixed_point = right_hand_side._fixed_point;
	}
	return *this;
}

// float	Fixed::toFloat( void ) const
// {
// 	int		power = pow(2, this->_nb_fractional_bits);
// 	float	result = (float)this->_fixed_point / power;

// 	return (result);
// }

std::ostream &	operator<<( std::ostream & ostr, Fixed const & instance)
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

int	Fixed::toInt( void ) const
{
	return (this->_fixed_point >> this->_nb_fractional_bits);
}

float	Fixed::toFloat( void ) const
{
	int		power = pow(2, this->_nb_fractional_bits);
	float	result = (float)this->_fixed_point / power;

	return (result);
}