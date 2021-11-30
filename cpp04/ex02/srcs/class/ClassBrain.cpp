/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassBrain.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:12:45 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/30 21:21:53 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnimalPurify.hpp"

Brain::Brain(void) {

	std::cout << "Brain class has been created" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Empty";
	return ;
}

Brain::Brain(const Brain &Brain) {

	std::cout << "Brain class has been created by copy" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = Brain.ideas[i];
	return ;
}

Brain::~Brain(void) {

	std::cout << "Brain class has been destroy" << std::endl;
	return ;
}

Brain	&Brain::operator=(const Brain &rhs) {

	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}
