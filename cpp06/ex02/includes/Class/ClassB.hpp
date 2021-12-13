/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:36:51 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/13 17:08:27 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSB_HPP
# define CLASSB_HPP

class B : public Base {

	public:

		// Constructors and destructor
		B(void);
		B(const B &src);
		virtual ~B();

		// Operator overloads
		B&	operator=(const B &rhs);

		// Getters / Setters

		// Member functions
};

#endif