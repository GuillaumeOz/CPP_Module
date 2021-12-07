/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:07:24 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/07 17:11:41 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <cstdlib>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form {

	public:

		// Constructors and destructor
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &src);
		virtual ~RobotomyRequestForm();

		// Operator overloads
		RobotomyRequestForm&	operator=(const RobotomyRequestForm &rhs);

		// Getters / Setters

		// Member functions
		virtual void		execute(const Bureaucrat &executor) const;

	private:

	std::string			_target;
	int const			_signedGrade;
	int const			_execGrade;

};

#endif