/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 12:35:32 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/08 17:48:18 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {


	return ;
}

Intern::Intern(const Intern &Intern) {

	(*this) = Intern;
	return ;
}

Intern::~Intern(void) {


	return ;
}

Intern	&Intern::operator=(const Intern &rhs) {

	(void)rhs;
	return (*this);
}

Form	*Intern::makeForm(std::string formName, std::string formTarget) {

	Form *formReturn = NULL;
	t_formIntern formList[] = 
	{
		{ "robotomy request", new RobotomyRequestForm(formTarget) },
		{ "shrubbery creation", new ShrubberyCreationForm(formTarget) },
		{ "presidential pardon", new PresidentialPardonForm(formTarget) }
	};

	for (int i = 0; i < 3 ; i++)
	{
		if (formList[i].formName == formName)
		{
			formReturn = formList[i].formType;
			std::cout << "Intern creates " << formList[i].formName << std::endl;
		}
	}

	if (formReturn == NULL)
	{
		std::cout << "Intern didn't find the form : " << formName << std::endl;
		std::cout << "He will never be a good bureaucrat..." << std::endl;
	}

	for (int i = 0; i < 3; i++)
	{
		if (formReturn != formList[i].formType)
			delete formList[i].formType;
	}

	return (formReturn);
}
