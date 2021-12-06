/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 19:30:00 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/06 21:17:47 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Unknown"), _execGrade(rand() % 149 + 1), _signedGrade(rand() % 149 + 1){

	this->_signed = false;
	return ;
}

Form(std::string name, int execGrade, int signedGrade) : _name(name), _execGrade(execGrade), _signedGrade(signedGrade) {

	this->_signed = false;
	return ;
}

Form::Form(const Form &Form) {

	(*this) = Form;
	return ;
}

Form::~Form(void) {

	return ;
}

Form	&Form::operator=(const Form &rhs) {

	this->setSigned(rhs._signed);
	return (*this);
}

// <<
std::ostream	&operator<<(std::ostream &ostr, Form const &Form) {

	ostr << Form.getName() << ", Form grade " << Form.getGrade() << std::endl;//change ouput
	return (ostr);
}


void	Form::setSigned(bool isSigned) {

	if (isSigned == true || isSigned == false)
		this->_signed = isSigned;
}

