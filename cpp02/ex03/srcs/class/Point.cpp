/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 02:20:15 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/21 04:18:44 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(void) : _x(0), _y(0)
{
	return ;
}

Point::Point(Fixed const x, const Fixed y) : _x(x), _y(y)
{
	return ;
}

Point::Point(Point const &src)
{
	*this = src;
	return ;
}

Point::~Point(void)
{
	return ;
}

Point	&Point::operator=(Point const &right_hand_side)
{
	*(Fixed *)&_x = right_hand_side._x;
	*(Fixed *)&_y = right_hand_side._y;
	return (*this);
}

float	Point::getX(void)
{
	return (this->_x.toFloat());
}

float	Point::getY(void)
{
	return (this->_y.toFloat());
}
