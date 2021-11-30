/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAAnimal.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:32:22 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/30 21:44:32 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSAANIMAL_HPP
# define CLASSAANIMAL_HPP

class AAnimal {

	public:

		virtual ~AAnimal(void);
		virtual AAnimal&	operator=(const AAnimal &rhs);
		virtual const std::string	&getType(void) const ;
		virtual Brain		*getBrain(void) const = 0;
		virtual void		makeSound(void) const = 0;

	protected:

	std::string type;

};

#endif