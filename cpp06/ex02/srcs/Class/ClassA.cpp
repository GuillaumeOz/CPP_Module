/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:11:41 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/13 18:28:20 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trueType.hpp"

A::A(void) {


	return ;
}

A::A(const A &A) {

	(void)A;
	return ;
}

A::~A(void) {


	return ;
}

A	&A::operator=(const A &rhs) {

	(void)rhs;
	return (*this);
}
