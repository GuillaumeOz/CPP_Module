/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:00:48 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/07 16:39:05 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "---------TEST1-----------" << std::endl;

	Bureaucrat BureaucratA("Bob", 1);
	Bureaucrat BureaucratB("John", 150);
	Bureaucrat BureaucratC("Zak", 0);
	Bureaucrat BureaucratD("Max", 151);

	std::cout << "---------TEST2-----------" << std::endl;

	BureaucratA.IncrementGrade();
	std::cout << BureaucratA.getGrade() << std::endl;
	BureaucratB.DecrementGrade();
	std::cout << BureaucratB.getGrade() << std::endl;

	std::cout << "---------TEST3-----------" << std::endl;

	BureaucratA.DecrementGrade();
	std::cout << BureaucratA.getGrade() << std::endl;
	BureaucratB.IncrementGrade();
	std::cout << BureaucratB.getGrade() << std::endl;

	std::cout << "---------TEST4-----------" << std::endl;

	std::cout << BureaucratA;
	return (0);
}