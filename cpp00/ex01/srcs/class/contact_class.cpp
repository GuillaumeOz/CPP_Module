/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:33:48 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/11 20:41:26 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	Contact::_nb_inst = 0;

Contact::Contact(void)
{
	Contact::_nb_inst += 1;
	return ;
}

Contact::~Contact(void)
{
	Contact::_nb_inst -= 1;
	return ;
}