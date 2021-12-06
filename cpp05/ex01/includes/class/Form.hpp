/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 19:03:38 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/06 21:15:01 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <cstdlib>

// Elle porte un nom, un booléen indiquant si elle est signée (au
// début, ce n’est pas le cas), un grade requis pour la signer et un grade requis pour l’exécuter. 
// Le nom et le grade sont constants et tous ces attributs sont privés (et non protégés).
// Les grades sont sujets aux mêmes contraintes que dans Bureaucrat, et des exceptions
// seront levées si l’un d’eux est en dehors des limites, via Form::GradeTooHighException
// et Form::GradeTooLowException.

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
		// std::string	getName(void) const;
		// bool			getSigned(void) const;
		// int			getExecGrade(void) const;
		// int			getSignedGrade(void) const;

		void			setSigned(bool isSigned);

		// Member functions
		// Form::GradeTooHighException;
		// Form::GradeTooLowException;



	private:

		std::string	const	_name;
		bool				_signed;//not signed at begining
		int	const			_execGrade;
		int	const			_signedGrade;

};

std::ostream	&operator<<(std::ostream &ostr, Form const &form);

#endif