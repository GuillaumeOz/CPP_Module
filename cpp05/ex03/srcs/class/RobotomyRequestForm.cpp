/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:10:53 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/08 12:19:10 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) :
	Form("RobotomyRequestForm", 45, 72), _target("Unkwnon"), _signedGrade(72), _execGrade(45) {

	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	Form("RobotomyRequestForm", 45, 72), _target(target), _signedGrade(72), _execGrade(45) {

	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &RobotomyRequestForm)
 : _target(RobotomyRequestForm._target), _signedGrade(RobotomyRequestForm._signedGrade),
  _execGrade(RobotomyRequestForm._execGrade) {

	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {

	return ;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {

	this->_target = rhs._target;
	return (*this);
}

std::string			RobotomyRequestForm::getTarget(void) const {

	return (this->_target);
}

void		RobotomyRequestForm::execute(const Bureaucrat &executor) const {

	int	random;

	this->checkIfExec(executor);
	std::cout << "Brr...Brrr...BRRRRR..." << std::endl;
	random = rand() % 2;
	if (random == 0)
		std::cout << executor.getName() << " has been robotomize !" << std::endl;
	else
		std::cout << executor.getName() << " failed to been robotomize..." << std::endl;
}
