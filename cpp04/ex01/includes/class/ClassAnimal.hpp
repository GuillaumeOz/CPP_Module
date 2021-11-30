/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:32:22 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/30 21:05:00 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSANIMAL_HPP
# define CLASSANIMAL_HPP

class Animal {

	public:
		// Constructors and destructor
		Animal(void);
		Animal(const Animal &src);
		virtual ~Animal();

		// Operator overloads
		Animal&	operator=(const Animal &rhs);
	
		// Getters / Setters
		virtual const std::string	&getType(void) const ;

		// Member functions
		virtual Brain	*getBrain(void) const = 0;
		virtual void	makeSound(void) const ;
		
	protected:
	
		std::string type;

};

#endif