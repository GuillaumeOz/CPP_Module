/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:29:56 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/20 21:33:24 by gozsertt         ###   ########.fr       */
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
	
	Fixed	&operator=(Fixed const &right_hand_side);

	int		getRawBits(void) const;

	void	setRawBits(int const raw);

	int		toInt(void) const;
	float	toFloat(void) const;

	private :

	int			_fixed_point;
	static int	_nb_fractional_bits;
};

std::ostream &	operator<<( std::ostream & ostr, Fixed const & instance);

#endif