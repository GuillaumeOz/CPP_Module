/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:00:48 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/06 19:01:00 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "---------TEST1-----------" << std::endl;

	BureauCrat bureauCratA("Bob", 1);
	BureauCrat bureauCratB("John", 150);
	BureauCrat bureauCratC("Zak", 0);
	BureauCrat bureauCratD("Max", 151);

	std::cout << "---------TEST2-----------" << std::endl;

	bureauCratA.IncrementGrade();
	std::cout << bureauCratA.getGrade() << std::endl;
	bureauCratB.DecrementGrade();
	std::cout << bureauCratB.getGrade() << std::endl;

	std::cout << "---------TEST3-----------" << std::endl;

	bureauCratA.DecrementGrade();
	std::cout << bureauCratA.getGrade() << std::endl;
	bureauCratB.IncrementGrade();
	std::cout << bureauCratB.getGrade() << std::endl;

	std::cout << "---------TEST4-----------" << std::endl;

	std::cout << bureauCratA;
	return (0);
}