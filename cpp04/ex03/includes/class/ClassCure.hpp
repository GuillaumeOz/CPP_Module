/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassCure.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:22:13 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/03 17:10:54 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCURE_HPP
# define CLASSCURE_HPP

class Cure : public AMateria{

	public:

		// Constructors and destructor
		Cure(void);
		Cure(const Cure &src);
		virtual ~Cure();

		// Operator overloads
		Cure&	operator=(const Cure &rhs);

		// Getters / Setters

		// Member functions
		AMateria	*clone(void) const ;
		void		use(ICharacter& target);
};

#endif