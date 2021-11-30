/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:24:00 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/30 14:49:46 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef CLASSDOG_HPP
# define CLASSDOG_HPP

class Dog : virtual public Animal {

	public:

		// Constructors and destructor
		Dog(void);
		Dog(const Dog &src);
		virtual ~Dog();

		// Operator overloads
		Dog&	operator=(const Dog &rhs);

		// Getters / Setters

		// Member functions
		virtual void	makeSound(void) const ;
};

#endif
