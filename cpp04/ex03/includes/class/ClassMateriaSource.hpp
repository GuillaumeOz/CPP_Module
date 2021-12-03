/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassMateriaSource.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:26:13 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/03 22:02:12 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSMATERIASOURCE_HPP
# define CLASSMATERIASOURCE_HPP

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

	private:

		static int	_materiaIndex;
		AMateria	*_saved[4];
};

#endif