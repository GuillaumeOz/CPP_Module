/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trueType.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:23:41 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/13 17:35:16 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trueType.hpp"

Base * generate(void) {

	int randomize;

	randomize = rand() % 3;//check value

	if (randomize == 0) {

		return (new A());
	}
	else if (randomize == 1) {

		return (new B());
	}
	else {

		return (new C());
	}
// 	else
// 		throw new std::exception();
}

void identify(Base * p) {

	A *aPtr;
	B *bPtr;
	C *cPtr;

	if ()
}

void identify( Base & p) {

	
}