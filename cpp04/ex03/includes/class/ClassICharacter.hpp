/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassICharacter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:00:24 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/01 18:54:59 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSICHARACTER_HPP
# define CLASSICHARACTER_HPP

// Create the Character class, which will implement the following interface:
// The Character possesses an inventory of 4 Materia at most, empty at the start. He’ll
// equip the Materia in slots 0 to 3, in this order.
// In case we try to equip a Materia in a full inventory, or use/unequip a nonexistent
// Materia, don’t do a thing.
// The unequip method must NOT delete Materia!
// The use(int, ICharacter&) method will have to use the Materia at the idx slot,
// and pass target as parameter to the AMateria::use method.

// Of course, you’ll have to be able to support ANY AMateria in a
// Character’s inventory.

// Your Character must have a constructor taking its name as a parameter. Copy or
// assignation of a Character must be deep, of course. The old Materia of a Character
// must be deleted. Same upon the destruction of a Character .

class ICharacter
{
	public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif