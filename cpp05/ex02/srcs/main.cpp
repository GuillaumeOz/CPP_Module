/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:00:48 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/07 17:32:14 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Form	*RobotomyForm = new RobotomyRequestForm("Form-42P");
	Form	*PresidentialForm = new PresidentialPardonForm("Form-08T");
	Form	*ShrubberyForm = new ShrubberyCreationForm("Form-90C");
	Bureaucrat		bureaucratA("Max", 1);
	Bureaucrat		bureaucratB("John", 42);
	Bureaucrat		bureaucratC("Will", 150);

	std::cout << "---------TEST1-----------" << std::endl;
	try
	{
		RobotomyForm->beSigned(bureaucratA);
		RobotomyForm->execute(bureaucratB);
		RobotomyForm->execute(bureaucratB);
		RobotomyForm->execute(bureaucratC);
		delete RobotomyForm;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------TEST2-----------" << std::endl;
	try
	{
		PresidentialForm->beSigned(bureaucratA);
		PresidentialForm->execute(bureaucratA);
		PresidentialForm->execute(bureaucratC);
		delete PresidentialForm;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------TEST3-----------" << std::endl;
	try
	{
		ShrubberyForm->beSigned(bureaucratA);
		ShrubberyForm->execute(bureaucratB);
		ShrubberyForm->execute(bureaucratC);
		delete ShrubberyForm;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
