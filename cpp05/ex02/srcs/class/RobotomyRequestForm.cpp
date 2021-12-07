/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:10:53 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/07 17:20:09 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : _target("Unkwnon"), _signedGrade(72), _execGrade(45) {

	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : _target(target), _signedGrade(72), _execGrade(45) {

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

void		RobotomyRequestForm::execute(const Bureaucrat &executor) const {

	int	random;//test random value

	this->checkIfExec(executor);
	std::cout << "Brr...Brrr...BRRRRR..." << std::endl;
	random = rand() % 2;
	if (random == 0)
		std::cout << executor.getName() << " has been robotomize !" << std::endl;
	else
		std::cout << executor.getName() << " failed to been robotomize..." << std::endl;
}
