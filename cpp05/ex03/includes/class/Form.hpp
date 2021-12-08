/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 19:03:38 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/08 12:18:26 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <cstdlib>

class Bureaucrat;

class Form {

	public:

		// Constructors and destructor
		Form(void);
		Form(std::string name, int execGrade, int signedGrade);
		Form(const Form &src);
		virtual ~Form();

		// Operator overloads
		Form&	operator=(const Form &rhs);

		// Getters / Setters
		std::string	getName(void) const;
		bool		getSigned(void) const;
		int			getExecGrade(void) const;
		int			getSignedGrade(void) const;

		virtual std::string	getTarget(void) const = 0;

		void		setSigned(bool isSigned);

		// Member functions
		void		checkGrade(void) const;
		void		beSigned(Bureaucrat const &Bureaucrat) ;
		void		checkIfExec(const Bureaucrat &executor) const ;

		virtual void	execute (Bureaucrat const & executor) const = 0;

		class GradeTooHighException : public std::exception {

			public:
				virtual const char* what() const throw() {
					return ("The grade is too high");
				}
		};

		class GradeTooLowException : public std::exception {

			public:
				virtual const char* what() const throw() {
					return ("The grade is too low");
				}
		};

		class CannotExecute : public std::exception
		{
		public:
			virtual const char* what() const throw()
			{
				return ("The form cannot be executed");
			}
		};

	private:

		std::string	const	_name;
		bool				_signed;//not signed at begining
		int	const			_execGrade;
		int	const			_signedGrade;
};

std::ostream	&operator<<(std::ostream &ostr, Form const &form);

#endif