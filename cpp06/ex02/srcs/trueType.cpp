/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trueType.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:23:41 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/13 18:44:08 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trueType.hpp"

Base * generate(void) {

	int randomize;

	randomize = rand() % 3;
	if (randomize == 0) {

		return (new A());
	}
	else if (randomize == 1) {

		return (new B());
	}
	else {

		return (new C());
	}
}

void identify(Base * p) {

	A *aPtr = NULL;
	B *bPtr = NULL;
	C *cPtr = NULL;

	aPtr = dynamic_cast<A*>(p);
	if (aPtr != NULL)
		std::cout << "A" << std::endl;
	bPtr = dynamic_cast<B*>(p);
	if (bPtr != NULL)
		std::cout << "B" << std::endl;
	cPtr = dynamic_cast<C*>(p);
	if (cPtr != NULL)
		std::cout << "C" << std::endl;
}

void identify( Base & p) {

	try {
		A &aRef = dynamic_cast<A&>(p);
		(void)aRef;
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e) {

		;
	}
	try {
		B &bRef = dynamic_cast<B&>(p);
		(void)bRef;
		std::cout << "B" << std::endl;
	}
	catch (std::exception &e)
	{
		;
	}
	try {
		C &cRef = dynamic_cast<C&>(p);
		(void)cRef;
		std::cout << "C" << std::endl;
	}
	catch (std::exception &e)
	{
		;
	}
}
