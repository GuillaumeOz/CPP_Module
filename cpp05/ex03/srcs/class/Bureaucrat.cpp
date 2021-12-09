/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:02:04 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/09 17:58:35 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void) : _name("Unknown") {

	this->_grade = rand() % 149 + 1;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {

	this->GradeTooHighException(grade);
	this->GradeTooLowException(grade);
	this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &Bureaucrat) : _name(Bureaucrat.getName()) {

	(*this) = Bureaucrat;
	return ;
}

Bureaucrat::~Bureaucrat(void) {

	return ;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs) {

	this->_grade = rhs.getGrade();
	return (*this);
}

std::ostream	&operator<<(std::ostream &ostr, Bureaucrat const &Bureaucrat) {

	ostr << Bureaucrat.getName() << ", Bureaucrat grade " << Bureaucrat.getGrade() << std::endl;
	return (ostr);
}

std::string	Bureaucrat::getName(void) const {

	return (this->_name);
}

int			Bureaucrat::getGrade(void) const {

	return (this->_grade);
}

bool		Bureaucrat::GradeTooHighException(int grade) {

	try
	{
		if (grade < 1)
			throw std::exception();
	}
	catch (std::exception & e)
	{
		std::cout << "Bureaucrat grade is too high" << std::endl;
		return(true);
	}
	return(false);
}

bool		Bureaucrat::GradeTooLowException(int grade) {

	try
	{
		if (grade > 150)
			throw std::exception();
	}
	catch (std::exception & e)
	{
		std::cout << "Bureaucrat grade is too low" << std::endl;
		return (true);
	}
	return(false);
}

void		Bureaucrat::IncrementGrade(void) {

	if (this->GradeTooHighException(this->getGrade() - 1) == false)
		this->_grade--;
}

void		Bureaucrat::DecrementGrade(void) {

	if (this->GradeTooLowException(this->getGrade() + 1) == false)
		this->_grade++;
}

bool		Bureaucrat::signForm(Form Form) {

	Form.beSigned(*this);
	if (Form.getSigned() == true)
	{
		std::cout << this->getName() << " signs " << Form.getName() << std::endl;
		return (true);
	}
	else
	{
		std::cout << this->getName() << " cannot sign because ";
		throw Form::GradeTooLowException();
		return (false);
	}
}

bool		Bureaucrat::executeForm(Form const & form) {

	if (form.getSigned() == true && this->getGrade() < form.getExecGrade())
	{
		std::cout << this->getName() << " executs " << form.getName() << std::endl;
		return (true);
	}
	else
		std::cout << this->getName() << " cannot executs " << form.getName() << std::endl;
	return (true);
}
