/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassScalar.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:29:06 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/09 20:06:51 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar(void) {

	this->_valueChar = 0;
	this->_valueInt = 0;
	this->_valueFloat = 0.0f;
	this->_valueDouble = 0.0;
	return ;
}

// ./convert 0
// char: Non displayable
// int: 0
// float: 0.0f
// double: 0.0

// ./convert nan
// char: impossible
// int: impossible
// float: nanf
// double: nan

// ./convert 42.0f
// char: '*'
// int: 42
// float: 42.0f
// double: 42.0

Scalar::Scalar(std::string const &value) {

	setChar(value);
	this->_valueInt = reinterpret_cast<int>(atoi(value.c_str()));
	this->_valueFloat = static_cast<float>(atof(value.c_str()));
	this->_valueFloat = static_cast<double>((double)atof(value.c_str()));
}


void		Scalar::setChar(std::string const &value) {

	this->_valueChar = static_cast<char>(atoi(value.c_str()));
}

Scalar::Scalar(const Scalar &Scalar) {

	(*this) = Scalar;
	return ;
}

Scalar::~Scalar(void) {


	return ;
}

// Scalar::operator char() {

// 	this->_valueChar = static_cast<char>(this->_valueChar);
// }
		// operator int();
		// operator float();
		// operator double();

Scalar	&Scalar::operator=(const Scalar &rhs) {

	this->_valueChar = rhs._valueChar;
	this->_valueInt = rhs._valueInt;
	this->_valueFloat = rhs._valueFloat;
	this->_valueDouble = rhs._valueDouble;
	return (*this);
}

void	Scalar::printChar(void) const {

	std::cout << "char : ";
	// if ()
	// 	std::cout << "impossible" << std::endl;
	if (this->_valueChar < 32 || this->_valueChar > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << this->_valueChar << std::endl;
}

void	Scalar::printInt(void) const {

	std::cout << "int : ";
	std::cout << this->_valueInt << std::endl;
}

void	Scalar::printFloat(void) const {

	std::cout << "float : ";
	std::cout << this->_valueFloat << std::endl;
	
}

void	Scalar::printDouble(void) const {

	std::cout << "double : ";
	std::cout << this->_valueDouble << std::endl;
	
}
