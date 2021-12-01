/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassCharacter.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:38:50 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/01 19:26:38 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCHARACTER_HPP
# define CLASSCHARACTER_HPP

class Character : virtual public ICharacter {

	public:

		// Constructors and destructor
		Character(void);
		Character(std::string name);
		Character(const Character &src);
		virtual ~Character();

		// Operator overloads
		Character&	operator=(const Character &rhs);

		// Getters / Setters
		std::string const & getName() const;

		// Member functions
		void equip(AMateria* m);

	protected:
	
		std::string		name;
		AMateria		*inventory;

};

#endif