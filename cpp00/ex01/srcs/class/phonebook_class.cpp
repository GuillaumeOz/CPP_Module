/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:12:08 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/14 12:22:35 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	Phonebook::_nb_inst = 0;
Contact Phonebook::users[8];

Phonebook::Phonebook(void)
{
	Phonebook::_nb_inst += 1;
	return ;
}

Phonebook::~Phonebook(void)
{
	Phonebook::_nb_inst -= 1;
	return ;
}

int		Phonebook::get_nb_inst(void)
{
	return (Phonebook::_nb_inst);
}

Contact	*Phonebook::get_user(int i)
{
	return (&(this->users[i]));
}
