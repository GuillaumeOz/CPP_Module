/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassC.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:37:19 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/13 17:09:11 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSC_HPP
# define CLASSC_HPP

class C : public Base {

	public:

		// Constructors and destructor
		C(void);
		C(const C &src);
		virtual ~C();

		// Operator overloads
		C&	operator=(const C &rhs);

		// Getters / Setters

		// Member functions
};

#endif