/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:02:04 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/06 19:00:56 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

BureauCrat::BureauCrat(void) : _name("Unknown") {

	this->_grade = rand() % 149 + 1;
	return ;
}

BureauCrat::BureauCrat(std::string name, int grade) : _name(name) {

	this->GradeTooHighException(grade);
	this->GradeTooLowException(grade);
	this->_grade = grade;
	return ;
}

BureauCrat::BureauCrat(const BureauCrat &BureauCrat) {

	(*this) = BureauCrat;
	return ;
}

BureauCrat::~BureauCrat(void) {

	return ;
}

BureauCrat	&BureauCrat::operator=(BureauCrat const &rhs) {

	this->_grade = rhs.getGrade();
	return (*this);
}

std::ostream	&operator<<(std::ostream &ostr, BureauCrat const &bureauCrat) {

	ostr << bureauCrat.getName() << ", bureaucrat grade " << bureauCrat.getGrade() << std::endl;
	return (ostr);
}

std::string	BureauCrat::getName(void) const {

	return (this->_name);
}

int			BureauCrat::getGrade(void) const {

	return (this->_grade);
}

bool		BureauCrat::GradeTooHighException(int grade) {

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
bool		BureauCrat::GradeTooLowException(int grade) {

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

void		BureauCrat::IncrementGrade(void) {

	if (this->GradeTooHighException(this->getGrade() - 1) == false)
		this->_grade--;
}

void		BureauCrat::DecrementGrade(void) {

	if (this->GradeTooLowException(this->getGrade() + 1) == false)
		this->_grade++;
}
