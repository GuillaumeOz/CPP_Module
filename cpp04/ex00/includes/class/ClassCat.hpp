/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:23:37 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/30 13:45:37 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCAT_HPP
# define CLASSCAT_HPP

class Cat : virtual public Animal {

	public:

		// Constructors and destructor
		Cat(void);
		Cat(const Cat &src);
		virtual ~Cat();

		// Operator overloads
		Cat&	operator=(const Cat &rhs);

		// Getters / Setters

		// Member functions
		virtual void	makeSound(void) const ;
};

#endif
