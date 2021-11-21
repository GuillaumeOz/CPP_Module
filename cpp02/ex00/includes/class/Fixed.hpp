/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:29:56 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/20 19:33:10 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public :

	Fixed(void);
	Fixed(Fixed const &src);
	~Fixed(void);
	
	Fixed	&operator=(Fixed const &right_hand_side);

	int getRawBits(void) const;

	void setRawBits(int const raw);

	private :

	int			_fixed_point;
	static int	_nb_fractional_bits;
};

#endif