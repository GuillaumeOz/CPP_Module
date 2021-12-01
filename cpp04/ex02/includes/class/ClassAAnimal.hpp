/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAAnimal.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:32:22 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/01 16:12:45 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSAANIMAL_HPP
# define CLASSAANIMAL_HPP

class AAnimal {

	public:

		virtual ~AAnimal(void);
		const std::string	&getType(void) const ;
		virtual Brain		*getBrain(void) const = 0;
		virtual void		makeSound(void) const = 0;

	protected:

		std::string type;

};

#endif