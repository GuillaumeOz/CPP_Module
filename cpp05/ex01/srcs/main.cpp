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
#include "Form.hpp"

int main()
{
	Bureaucrat	BureaucratA("Bob", 5);
	Bureaucrat	BureaucratB("John", 130);
	Bureaucrat	BureaucratC("Max", 7);
	Form		form1("Form-28B", 10, 10);

	std::cout << "---------TEST1-----------" << std::endl;

	std::cout << form1;
	std::cout << BureaucratA;
	std::cout << BureaucratB;
	std::cout << BureaucratC;

	try
	{
		BureaucratA.signForm(form1);
		BureaucratB.signForm(form1);
		BureaucratC.signForm(form1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "---------TEST2-----------" << std::endl;

	Form		form2("Form-29B", 0, 150);
	Form		form3("Form-30B", 1, 151);

	return (0);
}
