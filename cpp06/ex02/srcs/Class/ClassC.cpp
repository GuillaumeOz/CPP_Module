/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassC.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:15:52 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/13 18:28:10 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trueType.hpp"

C::C(void) {


	return ;
}

C::C(const C &C) {

	(void)C;
	return ;
}

C::~C(void) {


	return ;
}

C	&C::operator=(const C &rhs) {

	(void)rhs;
	return (*this);
}
