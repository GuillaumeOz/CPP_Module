/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:24:36 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/08 12:19:15 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) :
	Form("ShrubberyCreationForm", 137, 145), _target("Unkwnon"), _signedGrade(145), _execGrade(137) {

	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	Form("ShrubberyCreationForm", 137, 145), _target(target), _signedGrade(145), _execGrade(137) {

	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ShrubberyCreationForm)
 : _target(ShrubberyCreationForm._target), _signedGrade(ShrubberyCreationForm._signedGrade),
  _execGrade(ShrubberyCreationForm._execGrade) {

	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {

	return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {

	this->_target = rhs._target;
	return (*this);
}

std::string			ShrubberyCreationForm::getTarget(void) const {

	return (this->_target);
}

void		ShrubberyCreationForm::execute(const Bureaucrat &executor) const {

	std::ofstream	outfile;
	std::string		fileName = this->_target + "_shrubbery";

	this->checkIfExec(executor);
	outfile.open(fileName.c_str(), std::ios::out);
	outfile << "                     / / /" << std::endl;
	outfile << "                   /        /  /     //    /" << std::endl;
	outfile << "                /                 /         /  /" << std::endl;
	outfile << "                                /" << std::endl;
	outfile << "                               /                //" << std::endl;
	outfile << "               /          /            /              /" << std::endl;
	outfile << "               /            '/,        /               /" << std::endl;
	outfile << "               /              'b      *" << std::endl;
	outfile << "                /              '$    //                //" << std::endl;
	outfile << "               /    /           $:   /:               /" << std::endl;
	outfile << "             //      /  //      */  @):        /   / /" << std::endl;
	outfile << "                          /     :@,@):   ,/**:'   /" << std::endl;
	outfile << "              /      /,         :@@*: //**'      /   /" << std::endl;
	outfile << "                       '/o/    /:(@'/@*'  /" << std::endl;
	outfile << "               /  /       'bq,//:,@@*'   ,*      /  /" << std::endl;
	outfile << "                          ,p$q8,:@)'  /p*'      /" << std::endl;
	outfile << "                   /     '  / '@@Pp@@*'    /  /" << std::endl;
	outfile << "                    /  / //    Y7'.'     /  /" << std::endl;
	outfile << "                              :@):." << std::endl;
	outfile << "                             .:@:'." << std::endl;
	outfile << "                           .::(@:.  " << std::endl;

	outfile.close();
}
