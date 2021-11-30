/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassBrain.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:10:44 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/30 20:55:53 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSBRAIN_HPP
# define CLASSBRAIN_HPP

class Brain {

	public:

		// Constructors and destructor
		Brain(void);
		Brain(const Brain &src);
		virtual ~Brain();

		// Operator overloads
		Brain&	operator=(const Brain &rhs);

		// Getters / Setters

		// Member functions
		std::string	ideas[100];

};

#endif