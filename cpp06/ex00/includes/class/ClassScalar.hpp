/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassScalar.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:02:19 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/10 19:05:51 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSSCALAR_HPP
# define CLASSSCALAR_HPP

class Scalar {

	public:

		// Constructors and destructor
		Scalar(void);
		Scalar(char const *value);
		Scalar(const Scalar &src);
		virtual ~Scalar();

		// Operator overloads
		Scalar&	operator=(const Scalar &rhs);

		// Getters / Setters


		void	setEdgeCases(std::string const &value);
		void	setChar(char const *value);
		void	setInt(char const *value);
		void	setFloat(char const *value);
		void	setDouble(char const *value);

		// Operator

		// operator char();
		// operator int();
		// operator float();
		// operator double();

		// Member functions
		
		void	inputError(void) const;
		bool	scalarDigit(char c) const;

		void	printChar(void) const ;
		void	printInt(void) const ;
		void	printFloat(void) const ;
		void	printDouble(void) const ;

		void	findDot(void);
		//Error handler
		class parsingError : public std::exception {

			public:
				virtual const char* what() const throw() {
					return ("Wrong input number");
				}//cannot use this
		};

	private:

		char	const	*_srcValue;
		bool			_dot;
		bool			_onlyZero;
		std::string		_floatEdgeCases;
		std::string		_doubleEdgeCases;
		char			_valueChar;
		int				_valueInt;
		float			_valueFloat;
		double			_valueDouble;
};

#endif