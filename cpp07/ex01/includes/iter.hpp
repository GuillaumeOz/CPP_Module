/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:13:31 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/14 20:17:36 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void	printContent(T const &elem) {

	std::cout << elem << std::endl;
}

template<typename T, typename U>
void	iter(T *arrayAddr, U arrayLenght, void (*function)(T const &elem)) {

	for (int i = 0; i < arrayLenght; i++)
		function(arrayAddr[i]);
}

#endif