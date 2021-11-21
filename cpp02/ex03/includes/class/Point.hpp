/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 02:18:55 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/21 04:19:19 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

// Un constructeur par défaut qui initialise x et y à 0. OK
// ◦ Un destructeur. OK
// ◦ Un constructeur de copie.OK 


// ◦ Un constructeur qui prend deux fixed points const comme paramètres et qui
// initialise x et y avec ces valeurs. OK

// ◦ Une surcharge de l’opérateur d’assignation. OK check
// ◦ Tout ce que vous jugez utile.

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