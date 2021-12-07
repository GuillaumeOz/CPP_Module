/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:30:34 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/07 16:54:59 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form {

	public:

		// Constructors and destructor
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &src);
		virtual ~PresidentialPardonForm();

		// Operator overloads
		PresidentialPardonForm&	operator=(const PresidentialPardonForm &rhs);

		// Getters / Setters

		// Member functions
		virtual void		execute(const Bureaucrat &executor) const;

	private:

	std::string			_target;
	int const			_signedGrade;
	int const			_execGrade;

};

#endif