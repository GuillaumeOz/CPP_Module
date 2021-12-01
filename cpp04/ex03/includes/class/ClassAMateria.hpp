/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAMateria.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:56:44 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/01 20:10:04 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSAMATERIA_HPP
# define CLASSAMATERIA_HPP

// Create the concrete Materias Ice and Cure . Their type will be their name in
// lowercase ("ice" for Ice, etc...).
// Their clone() method will, of course, return a new instance of the real Materia’s
// type.
// 9
// Regarding the use(ICharacter&) method, it’ll display:
// • Ice: "* shoots an ice bolt at NAME *"
// • Cure: "* heals NAME’s wounds *"
// (Of course, replace NAME by the name of the Character given as parameter.)

class AMateria
{
	protected:
	// [...]
	public:
	AMateria(void);
	AMateria(std::string const & type);
	// [...]
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif