/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:17:46 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/10 18:57:32 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

// ./convert 0
// char: Non displayable
// int: 0
// float: 0.0f
// double: 0.0

// ./convert nan
// char: impossible
// int: impossible
// float: nanf
// double: nan

// ./convert 42.0f
// char: '*'
// int: 42
// float: 42.0f
// double: 42.0

// Pour chaque exercice, la situation doit être résolue par un cast spécifique.
// L’évaluation vérifiera que votre choix de cast est correct.

int main(int ac, char **av) {

	if (ac != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (0);
	}
	try
	{
		Scalar scalar(av[1]);

		scalar.printChar();
		scalar.printInt();
		scalar.printFloat();
		scalar.printDouble();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
