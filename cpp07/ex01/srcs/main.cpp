/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 19:23:26 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/14 20:12:31 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {

	int			intArray[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	std::string	stringTab[] = {"Je", "suis", "une", "string"};
	float		floatArray[] = {9.5, 8.5, 7.5, 6.5, 5.5, 4.5, 3.5, 2.5, 1.5};

	std::cout << "---intArray---" << std::endl;
	iter(intArray, 9, printContent);
	std::cout << "---stringTab---" << std::endl;
	iter(stringTab, 4, printContent);
	std::cout << "---floatArray---" << std::endl;
	iter(floatArray, 9, printContent);

	return (0);
}
