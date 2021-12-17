/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:27:47 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/17 14:32:13 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <deque>
#include <algorithm>
#include "easyfind.hpp"

template<typename T>
void	printIterator(T it, T end)
{
	if (it != end)
		std::cout << "Iterator value : " << *it << std::endl;
	else
		std::cout << "iterator value is not inside container range" << std::endl;
}

int	main( void )
{
	std::deque<int>				deque;
	std::deque<int>::iterator	it;

	deque.push_front(42);
	deque.push_front(41);
	deque.push_front(40);
	deque.push_back(43);
	deque.push_back(44);
	it = easyfind(deque, 5);
	printIterator(it, deque.end());
	it = easyfind(deque, 42);
	printIterator(it, deque.end());
	deque.empty();
}
