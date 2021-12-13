/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:14:37 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/13 18:27:48 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trueType.hpp"

B::B(void) {


	return ;
}

B::B(const B &B) {

	(void)B;
	return ;
}

B::~B(void) {


	return ;
}

B	&B::operator=(const B &rhs) {

	(void)rhs;
	return (*this);
}
