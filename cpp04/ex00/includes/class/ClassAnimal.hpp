/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:32:22 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/30 14:15:32 by gozsertt         ###   ########.fr       */
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
		const std::string	&getType(void) const ;

		// Member functions
		virtual void	makeSound(void) const ;
		
	protected:
	
		std::string type;

};

#endif