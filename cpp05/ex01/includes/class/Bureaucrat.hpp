/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:44:50 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/06 21:00:23 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <cstdlib>

class BureauCrat {

	public:

		// Constructors and destructor
		BureauCrat(void);
		BureauCrat(std::string name, int grade);
		BureauCrat(const BureauCrat &src);
		virtual ~BureauCrat();

		// Operator overloads
		BureauCrat&	operator=(const BureauCrat &rhs);

		// Getters / Setters

		std::string	getName(void) const;
		int			getGrade(void) const;

		// Member functions

		bool		GradeTooHighException(int grade);
		bool		GradeTooLowException(int grade);

		void		IncrementGrade(void);
		void		DecrementGrade(void);

	private:

	std::string	const	_name;
	int					_grade;

};

std::ostream	&operator<<(std::ostream &ostr, BureauCrat const &bureauCrat);

#endif