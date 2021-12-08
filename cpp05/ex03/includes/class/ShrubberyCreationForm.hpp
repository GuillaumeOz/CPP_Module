/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:17:33 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/08 11:26:32 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form {

	public:

		// Constructors and destructor
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		virtual ~ShrubberyCreationForm();

		// Operator overloads
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm &rhs);

		// Getters / Setters
		std::string			getTarget(void) const ;

		// Member functions
		virtual void		execute(const Bureaucrat &executor) const;

	private:

	std::string			_target;
	int const			_signedGrade;
	int const			_execGrade;

};

#endif