/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 19:30:00 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/07 17:33:03 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : _name("Unknown"), _execGrade(rand() % 149 + 1), _signedGrade(rand() % 149 + 1) {

	this->_signed = false;
	return ;
}

Form::Form(std::string name, int execGrade, int signedGrade) : _name(name), _execGrade(execGrade), _signedGrade(signedGrade) {

	this->_signed = false;
	this->checkGrade();
	return ;
}

Form::Form(const Form &Form) : _name(Form.getName()), _execGrade(Form.getExecGrade()), _signedGrade(Form.getSignedGrade()) {

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

std::ostream	&operator<<(std::ostream &ostr, Form const &Form) {

	ostr << "The " << Form.getName() << " Form requires grade " << Form.getSignedGrade() << " to be signed, and grade " << Form.getExecGrade() << " to be executed" << std::endl;//test
	return (ostr);
}

std::string	Form::getName(void) const {

	return (this->_name);
}

bool		Form::getSigned(void) const {

	return (this->_signed);
}

int			Form::getExecGrade(void) const {

	return (this->_execGrade);
}

int			Form::getSignedGrade(void) const {

	return (this->_signedGrade);
}

void	Form::setSigned(bool isSigned) {

	if (isSigned == true || isSigned == false)
		this->_signed = isSigned;
}

void	Form::checkGrade(void) const {

	try
	{
		if (this->_execGrade < 1 || this->_signedGrade < 1)
			throw Form::GradeTooHighException();
		if (this->_execGrade > 150 || this->_signedGrade > 150)
			throw Form::GradeTooLowException();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	Form::checkIfExec(const Bureaucrat &executor) const
{
	if (this->_signed == false || executor.getGrade() > this->_execGrade)
		throw Form::CannotExecute();
}

void	Form::beSigned(Bureaucrat const &Bureaucrat) {

	if (Bureaucrat.getGrade() < this->getSignedGrade())
		this->_signed = true;
	else
	{
		this->_signed = false;
	}
}
