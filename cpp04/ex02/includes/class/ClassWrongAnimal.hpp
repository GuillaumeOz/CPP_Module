/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassWrongAnimal.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:05:25 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/30 21:32:31 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSWRONGANIMAL_HPP
# define CLASSWRONGANIMAL_HPP

class WrongAnimal {

	public:

		// Constructors and destructor
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &src);
		virtual ~WrongAnimal();

		// Operator overloads
		WrongAnimal&	operator=(const WrongAnimal &rhs);

		// Getters / Setters
		const std::string	&getType(void) const ;

		// Member functions
		void	makeSound(void) const ;

	protected:
		std::string type;
};

#endif