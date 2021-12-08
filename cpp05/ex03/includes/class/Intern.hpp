/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 12:25:28 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/08 14:06:58 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

	public:

		// Constructors and destructor
		Intern(void);
		Intern(const Intern &src);
		virtual ~Intern();

		// Operator overloads
		Intern&	operator=(const Intern &rhs);

		// Getters / Setters

		// Member functions
		Form	*makeForm(std::string formName, std::string formTarget);

	private:

		typedef struct	s_formIntern
		{
			std::string	formName;
			Form		*formType;
		}				t_formIntern;

};

#endif