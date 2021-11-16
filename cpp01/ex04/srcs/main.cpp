/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:01:18 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/16 20:17:10 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

static int	check_args()
{
	if (argc != 4)
	{
		std::cout << "Error : Bad arguments number" << std::endl;
		return (1);
	}
}

int main(int argc, char **argv)
{
	Replace replace;



	std::string			filename = argv[1];
	std::string			s1 = argv[2];
	std::string			s2 = argv[3];
	std::ifstream		ifs(filename);
	std::string			line;

	std::ofstream		ofs(filename);

	std::getline(ifs, line);
	// std::istringstream iss(line);
	
	ifs.close();
	ofs.close();
	
}

// std::for_each(filename.begin(), filename.end(), [](char & c)
// {
// 	c = ::toupper(c);
// });