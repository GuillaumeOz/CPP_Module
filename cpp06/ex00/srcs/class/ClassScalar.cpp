/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassScalar.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:29:06 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/13 15:27:34 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar(void) {

	this->_dot = false;
	this->_notOnlyZero = false;
	this->_dotFirst = false;
	this->_error = false;
	this->_valueLen = 0;
	this->_floatEdgeCases = "None";
	this->_doubleEdgeCases = "None";
	this->_errorValueChar = false;
	this->_errorValueInt = false;
	this->_valueChar = 0;
	this->_valueInt = 0;
	this->_valueFloat = 0.0f;
	this->_valueDouble = 0.0f;
	return ;
}

Scalar::Scalar(char const *value) : _srcValue(value) {

	this->_dot = false;
	this->_notOnlyZero = false;
	this->_dotFirst = false;
	this->_error = false;
	this->_valueLen = 0;
	this->_floatEdgeCases = "None";
	this->_doubleEdgeCases = "None";
	this->_errorValueChar = false;
	this->_errorValueInt = false;
	if (setEdgeCases(value) == false)
	{
		errorHandler(value);
		findDot();
	}
	setChar(value);
	setInt(value);
	setFloat(value);
	setDouble(value);
}

void		Scalar::setChar(char const *value) {

	bool	isDigit = false;
	long	tester;

	for (int i = 0; value[i] != 0; i++)
	{
		if (scalarDigit(value[i]) == true || value[i] == '-')
			isDigit = true;
	}
	if (isDigit == true)
	{
		tester = static_cast<long>(atol(value));
		if (tester < -128 || tester > 127)
			this->_errorValueChar = true;
		else
			this->_valueChar = static_cast<char>(atoi(value));
	}
	else
		this->_valueChar = static_cast<char>(*value);
}

void		Scalar::setInt(char const *value) {

	bool	isDigit = false;
	long	tester;

	for (int i = 0; value[i] != 0; i++)
	{
		if (scalarDigit(value[i]) == true || value[i] == '-')
			isDigit = true;
	}
	if (isDigit == true)
	{
		tester = static_cast<long>(atol(value));
		if (tester < -2147483648 || tester > 2147483647)
			this->_errorValueInt = true;
		else
			this->_valueInt = static_cast<int>(atoi(value));
	}
	else
		this->_valueInt = static_cast<int>(*value);
}

void		Scalar::setFloat(char const *value) {

	bool	isDigit = false;

	if (value[0] == '.' && this->_valueLen > 1)
	{
		this->_dotFirst = true;
		value++;
	}
	for (int i = 0; value[i] != 0; i++)
	{
		if (scalarDigit(value[i]) == true || value[i] == '-')
			isDigit = true;
	}
	if (isDigit == true)
		this->_valueFloat = static_cast<float>(atof(value));
	else
		this->_valueFloat = static_cast<float>(*value);
}

void		Scalar::setDouble(char const *value) {

	bool	isDigit = false;

	if (value[0] == '.' && this->_valueLen > 1)
	{
		this->_dotFirst = true;
		value++;
	}
	for (int i = 0; value[i] != 0; i++)
	{
		if (scalarDigit(value[i]) == true || value[i] == '-')
			isDigit = true;
	}
	if (isDigit == true)
		this->_valueDouble = static_cast<double>(atof(value));
	else
		this->_valueDouble = static_cast<double>(*value);
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

bool		Scalar::setEdgeCases(std::string const &value) {

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
			return (true);
		}
	}
	return (false);
}

void	Scalar::printChar(void) const {

	std::cout << "char : ";
	if (this->_floatEdgeCases != "None" || this->_errorValueChar == true)
		std::cout << "impossible" << std::endl;
	else if (this->_valueChar < 32 || this->_valueChar > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << this->_valueChar << "'" << std::endl;
}

void	Scalar::printInt(void) const {

	std::cout << "int : ";
	if (this->_floatEdgeCases != "None" || this->_errorValueInt == true)
		std::cout << "impossible" << std::endl;
	else if (this->_dotFirst == true)
		std::cout << "0" << std::endl;
	else
		std::cout << this->_valueInt << std::endl;
}

void	Scalar::printFloat(void) const {

	std::cout << "float : ";
	if (this->_floatEdgeCases != "None")
		std::cout << this->_floatEdgeCases << std::endl;
	else if (this->_dotFirst == true)
		std::cout << "0." << this->_valueDouble << "f" << std::endl;
	else if (this->_dot == true && this->_notOnlyZero == true)
		std::cout << this->_valueFloat << "f" << std::endl;
	else if (this->_valueLen > 6)
		std::cout << this->_valueFloat << "f" << std::endl;
	else
		std::cout << this->_valueFloat << ".0f" << std::endl;
}

void	Scalar::printDouble(void) const {

	std::cout << "double : ";
	if (this->_doubleEdgeCases != "None")
		std::cout << this->_doubleEdgeCases << std::endl;
	else if (this->_dotFirst == true)
		std::cout << "0." << this->_valueDouble << std::endl;
	else if (this->_dot == true && this->_notOnlyZero == true)
		std::cout << this->_valueDouble << std::endl;
	else if (this->_valueLen > 6)
		std::cout << this->_valueFloat << std::endl;
	else
		std::cout << this->_valueDouble << ".0" << std::endl;
}

void	Scalar::findDot(void) {

	int	fCount = 0;

	for (int i = 0; this->_srcValue[i] != '\0'; i++)
	{
		if (this->_srcValue[i] == '.')
		{
			this->_dot = true;
			i++;
			while (this->_srcValue[i] != '\0' && (scalarDigit(this->_srcValue[i]) == true || this->_srcValue[i] == 'f'))
			{
				if (this->_srcValue[i] != '0' && this->_srcValue[i] != 'f')
					this->_notOnlyZero = true;
				if (this->_srcValue[i] == 'f')
					fCount ++;
				i++;
			}
			if (this->_srcValue[i] == '.')
				throw ScalarError();
			if (fCount > 1)
				throw ScalarError();
			return ;
		}
	}
}

void	Scalar::errorHandler(char const *value) {

	bool asciiChar = false;
	int fCout = 0;

	for (int i = 0; value[i] != '\0'; i++)
	{
		if (scalarDigit(value[i]) == false)
		{
			if (value[i] != '.' && value[i] != 'f' && value[i] != '-' && (value[i] >= 32 && value[i] <= 126))
				asciiChar = true;
			if (value[i] == 'f')
				fCout++;
		}
		if (asciiChar == true && i >= 1)
			throw ScalarError();
		if (fCout > 1)
			throw ScalarError();
		this->_valueLen += 1;
	}
}

bool	Scalar::scalarDigit(char c) const {

	if (c >= '0' && c <= '9')
		return (true);
	return (false);
}

int		Scalar::scalarStrlen(char *str) const {

	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
