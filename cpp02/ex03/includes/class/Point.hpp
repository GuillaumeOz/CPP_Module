/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 02:18:55 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/25 15:06:20 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	public :

	Point(void);
	Point(Fixed const x, Fixed const y);
	Point(Point const &point);
	~Point(void);

	Point	&operator=(Point const &right_hand_side);

	float	getX(void);
	float	getY(void);

	private :

	Fixed const _x;
	Fixed const _y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif