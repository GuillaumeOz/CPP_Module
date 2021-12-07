/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:33:25 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/07 16:42:30 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : _target("Unkwnon"), _signedGrade(25), _execGrade(5) {

	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : _target(target), _signedGrade(25), _execGrade(5) {

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

// PresidentialPardonForm (Grades requis : signature 25, execution 5). Action :
// Nous annonce que <target> a été pardonnée par Zafod Beeblebrox

void		PresidentialPardonForm::execute(const Bureaucrat &executor) const {

	this->checkIfExec(executor);
	std::cout << executor.getName() << " was forgiven by Zafod Beeblebrox" << std::endl;
}
