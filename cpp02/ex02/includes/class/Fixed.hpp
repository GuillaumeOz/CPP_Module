/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:29:56 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/21 02:44:00 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <fstream>
# include <sstream>

class Fixed
{
	public :

	Fixed(void);
	Fixed(int const fractionnal_bits);
	Fixed(float const fractionnal_bits);
	Fixed(Fixed const &src);
	~Fixed(void);

	bool	operator<(Fixed const &right_hand_side) const;
	bool	operator>(Fixed const &right_hand_side) const;
	bool	operator>=(Fixed const &right_hand_side) const;
	bool	operator<=(Fixed const &right_hand_side) const;
	bool	operator==(Fixed const &right_hand_side) const;
	bool	operator!=(Fixed const &right_hand_side) const;
	Fixed	&operator=(Fixed const &right_hand_side);
	Fixed	operator*(Fixed const &right_hand_side) const;
	Fixed	operator/(Fixed const &right_hand_side) const;
	Fixed	operator+(Fixed const &right_hand_side) const;
	Fixed	operator-(Fixed const &right_hand_side) const;
	Fixed	&operator++(void);
	Fixed	operator++(int);
	Fixed	&operator--(void);
	Fixed	operator--(int);

	int		getRawBits(void) const;

	void	setRawBits(int const raw);

	int		toInt(void) const;
	float	toFloat(void) const;

	static const Fixed	&max(Fixed &lhs, const Fixed &rhs);
	static Fixed		&max(Fixed &lhs, Fixed &rhs);
	static const Fixed	&min(Fixed &lhs, const Fixed &rhs);
	static Fixed		&min(Fixed &lhs, Fixed &rhs);

	private :

	int			_fixed_point;
	static int	_nb_fractional_bits;
};

std::ostream &	operator<<( std::ostream & ostr, Fixed const & instance);

#endif