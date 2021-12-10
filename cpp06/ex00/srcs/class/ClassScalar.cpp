/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassScalar.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:29:06 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/10 19:06:38 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar(void) {

	this->_valueChar = 0;
	this->_valueInt = 0;
	this->_valueFloat = 0.0f;
	this->_valueDouble = 0.0f;
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

Scalar::Scalar(char const *value) : _srcValue(value) {

	inputError();
	this->_dot = false;
	this->_onlyZero = false;
	this->_floatEdgeCases = "None";
	this->_doubleEdgeCases = "None";
	findDot();
	setEdgeCases(value);
	setChar(value);
	setInt(value);
	setFloat(value);
	setDouble(value);
}

void		Scalar::setChar(char const *value) {

	this->_valueChar = static_cast<char>(atoi(value));
}

void		Scalar::setInt(char const *value) {

	this->_valueInt = static_cast<int>(atoi(value));
}

void		Scalar::setFloat(char const *value) {

	this->_valueFloat = static_cast<float>(atof(value));
}

void		Scalar::setDouble(char const *value) {

	this->_valueDouble = static_cast<double>(atof(value));
}

Scalar::Scalar(const Scalar &Scalar) {

	(*this) = Scalar;
	return ;
}

Scalar::~Scalar(void) {


	return ;
}

Scalar	&Scalar::operator=(const Scalar &rhs) {

	this->_valueChar = rhs._valueChar;
	this->_valueInt = rhs._valueInt;
	this->_valueFloat = rhs._valueFloat;
	this->_valueDouble = rhs._valueDouble;
	return (*this);
}

void		Scalar::setEdgeCases(std::string const &value) {

	std::string	floatEdgeCases[] =
	{
		"inff", "+inff", "-inff", "nanf"
	};
	std::string	doubleEdgeCases[] =
	{
		"inf", "+inf", "-inf", "nan"
	};
	for (int i = 0; i < 4; i++)
	{
		if (floatEdgeCases[i] == value || doubleEdgeCases[i] == value)
		{
			this->_floatEdgeCases = floatEdgeCases[i];
			this->_doubleEdgeCases = doubleEdgeCases[i];
			return ;
		}
	}
	return ;
}

void	Scalar::printChar(void) const {

	std::cout << "char : ";
	if (this->_floatEdgeCases != "None")
		std::cout << "impossible" << std::endl;
	else if (this->_valueChar < 32 || this->_valueChar > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << this->_valueChar << std::endl;
}

void	Scalar::printInt(void) const {

	std::cout << "int : ";
	if (this->_floatEdgeCases != "None")
		std::cout << "impossible" << std::endl;
	else
		std::cout << this->_valueInt << std::endl;
}

void	Scalar::printFloat(void) const {

	std::cout << "float : ";
	if (this->_floatEdgeCases != "None")
		std::cout << this->_floatEdgeCases << std::endl;
	else if (this->_dot == false || this->_onlyZero == true)
	{
		std::cout << this->_valueFloat << ".0f" << std::endl;
	}
	else
		std::cout << this->_valueFloat << "f" << std::endl;
}

void	Scalar::printDouble(void) const {

	std::cout << "double : ";
	if (this->_doubleEdgeCases != "None")
		std::cout << this->_doubleEdgeCases << std::endl;
	else
		std::cout << this->_valueDouble << ".0" << std::endl;
}

void	Scalar::findDot(void) {

	for (int i = 0; this->_srcValue[i] != '\0'; i++)
	{
		if (this->_srcValue[i] == '.')
		{
			this->_dot = true;
			i++;
			while (this->_srcValue[i] != '\0' && (this->_srcValue[i] == '0' || this->_srcValue[i] == 'f'))
				i++;
			if (this->_srcValue[i] == '\0')
				this->_onlyZero = true;
			return ;
		}
	}
}

bool	Scalar::scalarDigit(char c) const {

	if (c >= '0' && c <= '9')
		return (true);
	return (false);
}

void	Scalar::inputError(void) const {

	if (scalarDigit(this->_srcValue[0]) == false && this->_srcValue[0] != '-')
		throw Scalar::parsingError();
}