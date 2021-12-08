/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:33:25 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/08 12:19:07 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) :
	Form("PresidentialPardonForm", 5, 25), _target("Unkwnon"), _signedGrade(25), _execGrade(5) {

	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	Form("PresidentialPardonForm", 5, 25), _target(target), _signedGrade(25), _execGrade(5) {

	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &PresidentialPardonForm)
 : _target(PresidentialPardonForm._target), _signedGrade(PresidentialPardonForm._signedGrade),
  _execGrade(PresidentialPardonForm._execGrade) {

	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {

	return ;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {

	this->_target = rhs._target;
	return (*this);
}

std::string			PresidentialPardonForm::getTarget(void) const {

	return (this->_target);
}

void		PresidentialPardonForm::execute(const Bureaucrat &executor) const {

	this->checkIfExec(executor);
	std::cout << executor.getName() << " was forgiven by Zafod Beeblebrox" << std::endl;
}
