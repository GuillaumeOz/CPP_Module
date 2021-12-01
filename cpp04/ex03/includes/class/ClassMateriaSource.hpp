/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassMateriaSource.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:26:13 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/01 20:02:10 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSMATERIASOURCE_HPP
# define CLASSMATERIASOURCE_HPP

// Create the MateriaSource class, which will have to implement the following interface:

// learnMateria must copy the Materia passed as a parameter, and store it in memory
// to be cloned later. Much in the same way as for Character , the Source can know at
// most 4 Materia, which are not necessarily unique.

// createMateria(std::string const &) will return a new Materia, which will be a
// copy of the Materia (previously learned by the Source) which type equals the parameter.
// Returns 0 if the type is unknown.
// In a nutshell, your Source must be able to learn "templates" of Materia and re-create
// them on demand. You’ll then be able to create a Materia without knowing its "real" type,
// just a string identifying it.

class MateriaSource : virtual public IMateriaSource {

	public:

		// Constructors and destructor
		MateriaSource(void);
		MateriaSource(const MateriaSource &src);
		virtual ~MateriaSource();

		// Operator overloads
		MateriaSource&	operator=(const MateriaSource &rhs);

		// Getters / Setters

		// Member functions
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

	protected:

		static int	materiaIndex;
		AMateria	*saved;
};

#endif