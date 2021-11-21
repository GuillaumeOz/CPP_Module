/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:31:24 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/21 04:18:53 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

#define PRINT(x) std::cout << x << std::endl;

int Fixed::_nb_fractional_bits = 8;

Fixed::Fixed(void)
{
	this->_fixed_point = 0;
	return ;
}

Fixed::Fixed(const int value)
{
	this->_fixed_point = value << this->_nb_fractional_bits;
	return;
}

Fixed::Fixed(const float value)
{
	int power = 256;
	this->_fixed_point = roundf(value * power);
	return;
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
	return;
}

Fixed::~Fixed()
{
	return ;
}


bool	Fixed::operator<(Fixed const &right_hand_side) const
{
	if (this->_fixed_point < right_hand_side._fixed_point)
		return (true);
	return (false);
}

bool	Fixed::operator>(Fixed const &right_hand_side) const
{
	if (this->_fixed_point > right_hand_side._fixed_point)
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const &right_hand_side) const
{
	if (this->_fixed_point >= right_hand_side._fixed_point)
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const &right_hand_side) const
{
	if (this->_fixed_point <= right_hand_side._fixed_point)
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const &right_hand_side) const
{
	if (this->_fixed_point == right_hand_side._fixed_point)
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const &right_hand_side) const
{
	if (this->_fixed_point != right_hand_side._fixed_point)
		return (true);
	return (false);
}

Fixed	&Fixed::operator=(Fixed const &right_hand_side)
{
	if (this != &right_hand_side)
		this->_fixed_point = right_hand_side._fixed_point;
	return *this;
}

Fixed	Fixed::operator*(Fixed const &right_hand_side) const
{
	Fixed ret;
	int power;

	power = 256;
	ret._fixed_point = roundf((this->toFloat() * right_hand_side.toFloat()) * power);
	return (ret);
}

Fixed	Fixed::operator/(Fixed const &right_hand_side) const
{
	Fixed ret;
	int power;

	power = 256;
	if (right_hand_side.toFloat() == 0)
	{
		std::cout << "Division by 0 detected, Fixed() was returned" << std::endl;
		return (ret);
	}
	ret._fixed_point = roundf((this->toFloat() * right_hand_side.toFloat()) * power);
	return (ret);
}

Fixed	Fixed::operator+(Fixed const &right_hand_side) const
{
	Fixed ret;

	ret.setRawBits(_fixed_point + right_hand_side._fixed_point);
	return (ret);
}

Fixed	Fixed::operator-(Fixed const &right_hand_side) const
{
	Fixed ret;

	ret.setRawBits(_fixed_point - right_hand_side._fixed_point);
	return (ret);
}

Fixed	&Fixed::operator++(void)
{
	this->_fixed_point++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	++(*this);
	return (tmp);
}

Fixed	&Fixed::operator--(void)
{
	this->_fixed_point--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	--(*this);
	return (tmp);
}

int		Fixed::getRawBits(void) const
{
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

const Fixed		&Fixed::max(Fixed &lhs, const Fixed &rhs)
{
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}

Fixed		&Fixed::max(Fixed &lhs, Fixed &rhs)
{
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}

const Fixed		&Fixed::min(Fixed &lhs, const Fixed &rhs)
{
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

Fixed		&Fixed::min(Fixed &lhs, Fixed &rhs)
{
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

std::ostream	&operator<<(std::ostream & ostr, Fixed const &instance)
{
	ostr << instance.toFloat();
	return (ostr);
}
