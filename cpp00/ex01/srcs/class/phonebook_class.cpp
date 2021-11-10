/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:12:08 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/10 20:17:18 by gozsertt         ###   ########.fr       */
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

void	Phonebook::add(int i)
{
	std::cout << "Follow the next steps for creating new user" << std::endl;
	Phonebook::index = i;
	std::cout << "Enter a first name" << std::endl;
	std::getline(std::cin, this->first_name);
	std::cout << "Enter a last name" << std::endl;
	std::getline(std::cin, this->last_name);
	std::cout << "Enter a nickname" << std::endl;
	std::getline(std::cin, this->nickname);
	std::cout << "Enter a phone number" << std::endl;
	std::getline(std::cin, this->phone_number);
	if (this->phone_number.find_first_not_of("0123456789") != std::string::npos)
		this->phone_number = "Error number";
	std::cout << "Enter a darkest secret" << std::endl;
	std::getline(std::cin, this->darkest_secret);
	system("clear");
	return ;
}

void	Phonebook::search_users(void) const
{
	std::cout << std::setfill (' ') << std::setw (10);
	std::cout << this->index << "|";
	std::cout << std::setfill (' ') << std::setw (10);
	if (this->first_name.length() > 10)
		std::cout << this->first_name.substr(0, 9).insert(9, ".") << "|";
	else
		std::cout << this->first_name << "|";
	std::cout << std::setfill (' ') << std::setw (10);
	if (this->last_name.length() > 10)
		std::cout << this->last_name.substr(0, 9).insert(9, ".") << "|";
	else
		std::cout << this->last_name << "|";
	std::cout << std::setfill (' ') << std::setw (10);
	if (this->nickname.length() > 10)
		std::cout << this->nickname.substr(0, 9).insert(9, ".") << std::endl;
	else
		std::cout << this->nickname << std::endl;
}

void	Phonebook::search_user(void) const
{
	std::cout << "See the user below : " << std::endl;
	std::cout << "Index : " << this->index << std::endl;
	std::cout << "First name : " << this->first_name << std::endl;
	std::cout << "Last name : " << this->last_name << std::endl;
	std::cout << "Phone number : " << this->phone_number << std::endl;
	std::cout << "Darkest_secret : " << this->darkest_secret << std::endl;
}
