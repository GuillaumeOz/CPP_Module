/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:21:54 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/09 16:07:33 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

static void	phonebook_usage(void)
{
	std::cout << "Please choose between these options :" << std::endl;
	std::cout << "\e[32mEXIT\e[37m - Quit this beautiful Phonebook..." << std::endl;
	std::cout << "\e[32mADD\e[37m - Add a new user to Phonebook" << std::endl;
	std::cout << "\e[32mSEARCH\e[37m - Search a user into Phonebook" << std::endl;
}

static void	search(Phonebook *users, int total_inst)
{
	std::string	input;
	int			i;

	i = 0;
	if (total_inst == 0)
	{
		std::cout << "No user are register :( !" << std::endl;
		phonebook_usage();
		return ;
	}
	std::cout << std::setfill (' ') << std::setw (10);
	std::cout << "Index" << "|";
	std::cout << std::setfill (' ') << std::setw (10);
	std::cout << "First name" << "|";
	std::cout << std::setfill (' ') << std::setw (10);
	std::cout << "Last name" << "|";
	std::cout << std::setfill (' ') << std::setw (10);
	std::cout << "Nickname" << std::endl;
	if (total_inst > 7)
		total_inst = 8;
	while (i < total_inst)
	{
		(users[i]).search_users();
		i++;
	}
	std::cout << "Choose the index you want to display the contact details" << std::endl;
	std::cout << "Warning: an incorrect entry will redirect you to the main menu" << std::endl;
	std::getline(std::cin, input);
	if (input.length() == 1 && (input[0] >= '0' && input[0] <= ('0' + total_inst - 1)))
	{
		(users[input[0] - '0']).search_user();
		phonebook_usage();
	}
	else
	{
		system("clear");
		phonebook_usage();
	}
}

int	main()
{
	Phonebook	users[8];
	std::string	input;
	int			i;
	int			j;

	i = 0;
	j = 0;
	phonebook_usage();
	while (std::getline(std::cin, input))
	{
		if ((input.compare("EXIT")) == 0)
			return (0);
		if (i >= 8)
		{
			j = i % 8;
			std::cout << "You have exceeded the limit of 8 users" << std::endl;
			std::cout << "Next ADD will remove user " << j << std::endl;
			std::cout << std::endl;
		}
		if (input.compare("ADD") == 0)
		{
			users[j].add(j);
			phonebook_usage();
			i++;
			j = i % 8;
		}
		else if (input.compare("SEARCH") == 0)
			search(users, i);
		else
			std::cout << "Please choose between : \"EXIT\",\"ADD\" or \"SEARCH\"" << std::endl;
	}
	return (0);
}
