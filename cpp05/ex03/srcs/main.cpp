/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:00:48 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/08 17:34:29 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern someRandomIntern;
	Bureaucrat Boss("Boss", 1);
	Form* rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Boss");
	if (rrf != NULL)
	{
		rrf->beSigned(Boss);
		rrf->execute(Boss);
		delete rrf;
	}

	rrf = someRandomIntern.makeForm("shrubbery creation", "Boss");
	if (rrf != NULL)
	{
		rrf->beSigned(Boss);
		rrf->execute(Boss);
		delete rrf;
	}

	rrf = someRandomIntern.makeForm("presidential pardon", "Boss");
	if (rrf != NULL)
	{
		rrf->beSigned(Boss);
		rrf->execute(Boss);
		delete rrf;
	}

	rrf = someRandomIntern.makeForm("Form-2D5rT0", "Boss");

	return (0);
}
