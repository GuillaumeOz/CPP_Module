/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:12:08 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/09 16:15:11 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	Phonebook::_nb_inst = 0;

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

// first name, last name, nickname,
// phone number,darkest secret.
void	Phonebook::add(int i)//protect against empty add
{
	std::cout << "Follow the next steps for creating new user" << std::endl;
	Phonebook::index = i;//segfault with ctrl d
	std::cout << "Enter a first name" << std::endl;
	std::getline(std::cin, this->first_name);
	std::cout << "Enter a last name" << std::endl;
	std::getline(std::cin, this->last_name);
	std::cout << "Enter a nickname" << std::endl;
	std::getline(std::cin, this->nickname);
	std::cout << "Enter a phone number" << std::endl;
	std::getline(std::cin, this->phone_number);//put some security here
	std::cout << "Enter a darkest secret" << std::endl;
	std::getline(std::cin, this->darkest_secret);
	return ;
}

void	Phonebook::search_users(void) const
{
	//index, first name, last name and nickname.
	std::cout << std::setfill (' ') << std::setw (10);
	if (this->index)
	std::cout << this->index << "|";
	std::set
	std::cout << std::setfill (' ') << std::setw (10);
	std::cout << this->first_name << "|";
	std::cout << std::setfill (' ') << std::setw (10);
	std::cout << this->last_name << "|";
	std::cout << std::setfill (' ') << std::setw (10);
	std::cout << this->nickname << std::endl;
}

void	Phonebook::search_user(void) const
{
	std::cout << "See the user below :" << std::endl;
	std::cout << this->index << std::endl;
	std::cout << this->first_name << std::endl;
	std::cout << this->last_name << std::endl;
	std::cout << this->phone_number << std::endl;
	std::cout << this->darkest_secret << std::endl;
}
