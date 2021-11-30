/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassWrongCat.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:26:49 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/30 14:45:15 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSWRONGCAT_HPP
# define CLASSWRONGCAT_HPP

class WrongCat : virtual public WrongAnimal{

	public:

		// Constructors and destructor
		WrongCat(void);
		WrongCat(const WrongCat &src);
		virtual ~WrongCat();

		// Operator overloads
		WrongCat&	operator=(const WrongCat &rhs);

		// Getters / Setters

		// Member functions
		void	makeSound(void) const ;
};

#endif