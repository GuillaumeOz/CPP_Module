/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassScalar.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:02:19 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/13 15:24:52 by gozsertt         ###   ########.fr       */
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
		bool	setEdgeCases(std::string const &value);
		void	setChar(char const *value);
		void	setInt(char const *value);
		void	setFloat(char const *value);
		void	setDouble(char const *value);

		// Member functions
		
		bool	scalarDigit(char c) const;
		int		scalarStrlen(char *str) const;

		void	printChar(void) const ;
		void	printInt(void) const ;
		void	printFloat(void) const ;
		void	printDouble(void) const ;

		void	findDot(void);

		// Error

		void	errorHandler(char const *value);

		class ScalarError : public std::exception {

			public:
				virtual const char* what() const throw() {
					return ("Input is incorrect, please enter a char, int, float or double");
				}
		};

	private:

		char	const	*_srcValue;
		bool			_dot;
		bool			_notOnlyZero;
		bool			_dotFirst;
		bool			_error;
		int				_valueLen;
		std::string		_floatEdgeCases;
		std::string		_doubleEdgeCases;
		bool			_errorValueChar;
		bool			_errorValueInt;
		char			_valueChar;
		int				_valueInt;
		float			_valueFloat;
		double			_valueDouble;
};

#endif