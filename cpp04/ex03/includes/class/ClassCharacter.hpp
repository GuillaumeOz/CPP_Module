/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassCharacter.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:38:50 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/03 16:14:51 by gozsertt         ###   ########.fr       */
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
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	//print inventory

	private:
	
		std::string		_name;
		AMateria		*_inventory[4];

};

#endif