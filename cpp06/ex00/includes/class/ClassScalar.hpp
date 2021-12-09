/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassScalar.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:02:19 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/09 20:04:09 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSSCALAR_HPP
# define CLASSSCALAR_HPP

class Scalar {

	public:

		// Constructors and destructor
		Scalar(void);
		Scalar(std::string const &value);
		Scalar(const Scalar &src);
		virtual ~Scalar();

		// Operator overloads
		Scalar&	operator=(const Scalar &rhs);

		// Getters / Setters

		void	setChar(std::string const &value);
		// Operator

		// operator char();
		// operator int();
		// operator float();
		// operator double();

		// Member functions

		void	printChar(void) const ;
		void	printInt(void) const ;
		void	printFloat(void) const ;
		void	printDouble(void) const ;

		//Error handler
		class noInput : public std::exception {

			public:
				virtual const char* what() const throw() {
					return ("Wrong number of arguments");
				}
		};


	// try
	// {
	// 		throw Scalar::noInput();
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// 	return (0);
	// }
		// class GradeTooLowException : public std::exception {

		// 	public:
		// 		virtual const char* what() const throw() {
		// 			return ("The grade is too low");
		// 		}
		// };

	private:

		char	_valueChar;
		int		_valueInt;
		float	_valueFloat;
		double	_valueDouble;
};

#endif