/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:01:18 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/17 16:54:12 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

static int	check_args_number(int argc)
{
	if (argc != 4)
	{
		std::cout << "Error : Bad arguments number" << std::endl;
		return (true);
	}
	return (false);
}

int main(int argc, char **argv)
{
	Replace replace;

	if (check_args_number(argc) == true)
		return (1);
	replace.replace_file(argv[1], argv[2], argv[3]);
	return (0);
}
