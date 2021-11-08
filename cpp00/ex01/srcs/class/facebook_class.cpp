/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   facebook_class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:12:08 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/08 21:03:06 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "facebook.hpp"

int	Facebook::_nb_inst = 0;

Facebook::Facebook(void)
{
	Facebook::_nb_inst += 1;
	return ;
}

Facebook::~Facebook(void)
{
	Facebook::_nb_inst -= 1;
	return ;
}

int		Facebook::get_nb_inst(void)
{
	return (Facebook::_nb_inst);
}

// first name, last name, nickname,
// phone number,darkest secret.
void	Facebook::add(int i)//protect against empty add
{
	std::cout << "Follow the next steps for creating new user" << std::endl;
	Facebook::index = i;//segfault with ctrl d
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

	// this->user = this->first_name + this->last_name
	// 	+ this->nickname + this->phone_number
	// 	+ this->darkest_secret + '\n';
	// std::cout << this->user << std::endl;
	return ;
}

// Facebook::search(void)
// {
// 	return ;
// }