/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassIce.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:21:50 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/03 17:41:05 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSICE_HPP
# define CLASSICE_HPP

class Ice : public AMateria{

	public:

		// Constructors and destructor
		Ice(void);
		Ice(const Ice &src);
		virtual ~Ice();

		// Operator overloads
		Ice&	operator=(const Ice &rhs);

		// Getters / Setters

		// Member functions
		AMateria	*clone(void) const ;
		void		use(ICharacter& target);
};

#endif