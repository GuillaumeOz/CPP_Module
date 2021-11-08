/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   facebook.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:21:54 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/08 21:10:04 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "facebook.hpp"

static void		search(Facebook *users)
{
	int total_inst;

	total_inst = Facebook::get_nb_inst();
	for (int i = 0, i < total_inst; i++);
	{
		Facebook::users[i].index << std::setfill ('x') << std::setw (10)
	}
	return (0);//index, first name, last name and nickname.
}

static void		facebook_usage(void)
{
	std::cout << "Please choose between these options :" << std::endl;
	std::cout << "\e[32mEXIT\e[37m - Quit this beatiful Facebook..." << std::endl;
	std::cout << "\e[32mADD\e[37m - Add a new user to Facebook" << std::endl;
	std::cout << "\e[32mSEARCH\e[37m - Search a user into the Facebook" << std::endl;
}

Facebook	add_new_user(int i)
{
	Facebook user;

	std::cout << i << std::endl;
	user.add(i);
	facebook_usage();
	return (user);
}

int	main()
{
	Facebook	users[8];
	std::string	input;
	int			i;

	i = 0;
	memset(users, 0, sizeof(users));
	std::cout << "------- Welcome to Facebook ! -------" << std::endl;
	facebook_usage();
	while (std::getline(std::cin, input))
	{
		if (i == 7)//remplace by get_nb_inst ?
		{
			i = 0;
			std::cout << "You have exceeded the limit of 8 users" << std::endl;
			std::cout << "Next ADD will remove user " << i << std::endl;
			std::cout << std::endl;
		}
		if ((input.compare("EXIT")) == 0)
			return (0);
		else if (input.compare("ADD") == 0)
		{
			users[i] = add_new_user(i);
			i++;
		}
		else if (input.compare("SEARCH") == 0)
			search(users);
		else
			std::cout << "Please choose between : \"EXIT\",\"ADD\" or \"SEARCH\"" << std::endl;

	}
	return (0);
}
