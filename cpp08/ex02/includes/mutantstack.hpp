/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 20:25:32 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/18 11:06:28 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

template<typename T>
class MutantStack : public std::stack<T> {

	public:

		// Constructors and destructor
		MutantStack<T>(void) {

			return ;
		}

		MutantStack<T>(const MutantStack &src) {

			(*this) = src;
		}

		virtual ~MutantStack<T>() {

			return ;
		}

		// Operator overloads
		MutantStack&	operator=(const MutantStack &rhs);

		// Getters / Setters

		// Member functions

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin(void) {
			
			return (this->c.begin());
		}

		iterator end(void) {
			
			return (this->c.end());
		}

};

#endif