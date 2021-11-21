/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 02:17:58 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/21 15:52:36 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

static float sign (Point p1, Point p2, Point p3)
{
	return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float	d1;
	float	d2;
	float	d3;
	bool	neg;
	bool	pos;

	d1 = sign(point, a, b);
	d2 = sign(point, b, c);
	d3 = sign(point, c, a);

	neg = (d1 <= 0) || (d2 <= 0) || (d3 <= 0);
	pos = (d1 >= 0) || (d2 >= 0) || (d3 >= 0);

	return !(neg && pos);
}
