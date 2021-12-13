/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:33:03 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/13 17:12:30 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSA_HPP
# define CLASSA_HPP

class A : public Base {

	public:

		// Constructors and destructor
		A(void);
		A(const A &src);
		virtual ~A();

		// Operator overloads
		A&	operator=(const A &rhs);

		// Getters / Setters

		// Member functions
};

#endif