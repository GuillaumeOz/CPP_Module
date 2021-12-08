/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:00:48 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/08 17:29:02 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat		bureaucratA("Max", 1);
	Bureaucrat		bureaucratB("John", 42);
	Bureaucrat		bureaucratC("Will", 150);
	Form			*RobotomyForm = new RobotomyRequestForm("Max");
	Form			*PresidentialForm = new PresidentialPardonForm("Max");
	Form			*ShrubberyForm = new ShrubberyCreationForm("John");

	std::cout << "---------TEST1-----------" << std::endl;

	try
	{
		std::cout << "-----RobotomyForm---" << std::endl;
		std::cout << "Signed Grade : " << RobotomyForm->getSignedGrade() << std::endl;// 72
		std::cout << "Exec Grade : " << RobotomyForm->getExecGrade() << std::endl;// 42
		RobotomyForm->beSigned(bureaucratA);
		bureaucratA.executeForm(*RobotomyForm);
		RobotomyForm->execute(bureaucratB);
		RobotomyForm->execute(bureaucratB);
		RobotomyForm->execute(bureaucratC);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "---------TEST2-----------" << std::endl;

	try
	{
		std::cout << "--PresidentialForm--" << std::endl;
		std::cout << "Signed Grade : " << PresidentialForm->getSignedGrade() << std::endl;// 25
		std::cout << "Exec Grade : " << PresidentialForm->getExecGrade() << std::endl;// 5
		PresidentialForm->beSigned(bureaucratA);
		bureaucratA.executeForm(*PresidentialForm);
		PresidentialForm->execute(bureaucratA);
		PresidentialForm->execute(bureaucratC);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "---------TEST3-----------" << std::endl;

	try
	{
		std::cout << "----ShrubberyForm---" << std::endl;
		std::cout << "Signed Grade : " << ShrubberyForm->getSignedGrade() << std::endl;// 145
		std::cout << "Exec Grade : " << ShrubberyForm->getExecGrade() << std::endl;// 137
		ShrubberyForm->beSigned(bureaucratB);
		bureaucratB.executeForm(*ShrubberyForm);
		ShrubberyForm->execute(bureaucratB);
		ShrubberyForm->execute(bureaucratC);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	delete RobotomyForm;
	delete PresidentialForm;
	delete ShrubberyForm;

	return (0);
}
