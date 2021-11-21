/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:35:23 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/21 04:19:07 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>
#include <cmath>

int main(void)
{
	Point a(Fixed(0), Fixed(0));
	Point b(Fixed(0), Fixed(10));
	Point c(Fixed(10), Fixed(0));
	Point point(Fixed(1), Fixed(0.5f));

	if (bsp(a, b, c, point) == true)
		std::cout << "In" << std::endl;
	else
		std::cout << "Out" << std::endl;
	return (0);
}
