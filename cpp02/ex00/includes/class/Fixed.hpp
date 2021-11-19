/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:29:56 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/18 20:48:16 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

// Membre privés :
// ◦ Un int pour stocker la valeur a point fixe OK
// ◦ Une variable statique constante de type int pour stocker le nombre de bits
// fractionnels. Cette variable vaudra toujours 8. OK

// • Membres publics :
// ◦ Un constructeur par défaut qui initialise la valeur a point fixe à 0
// ◦ Un destructeur.
// ◦ Un constructeur par copie.
// ◦ Un overload d’opérateur d’assignation.
// ◦ Une fonction membre int getRawBits(void) const; qui renvoie la valeur
// brute du nombre à point fixe.
// ◦ Une fonction membre void setRawBits(int const raw); qui set la valeur
// du nombre à point fixe.

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

	int			_fix_point;
	static int	_nb_fractional_bits;
};

#endif