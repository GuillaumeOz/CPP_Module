/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:38:43 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/17 19:50:42 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span {

	public:

		// Constructors and destructor
		Span(void);
		Span(unsigned int const & N);
		Span(const Span &src);
		virtual ~Span();

		// Operator overloads
		Span&	operator=(const Span &rhs);

		// Getters / Setters
		int		shortestSpan(void) const;
		int		longestSpan(void) const;

		// Member functions
		void	addNumber(int value);
		void	addRandomNumber(void);
		void	addRangeIterator(std::vector<int>::iterator start, std::vector<int>::iterator end);

	private:

		unsigned int				_N;
		std::vector<int>			_container;
};

#endif