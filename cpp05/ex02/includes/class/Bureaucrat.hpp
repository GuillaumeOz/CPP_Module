/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:44:50 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/07 17:32:37 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <cstdlib>

class Form;

class Bureaucrat {

	public:

		// Constructors and destructor
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &src);
		virtual ~Bureaucrat();

		// Operator overloads
		Bureaucrat&	operator=(const Bureaucrat &rhs);

		// Getters / Setters

		std::string	getName(void) const;
		int			getGrade(void) const;

		// Member functions

		bool		GradeTooHighException(int grade);
		bool		GradeTooLowException(int grade);

		void		IncrementGrade(void);
		void		DecrementGrade(void);

		bool		signForm(Form Form);

	private:

	std::string	const	_name;
	int					_grade;

};

std::ostream	&operator<<(std::ostream &ostr, Bureaucrat const &Bureaucrat);

#endif