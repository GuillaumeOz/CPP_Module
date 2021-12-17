/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:38:41 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/17 20:19:08 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include <cstdlib>
#include "span.hpp"

Span::Span() : _N(0) {

	return ;
}

Span::Span(unsigned int const & N) : _N(N) {

	return ;
}

Span::Span(Span const & src) {

	(*this) = src;
	return ;
}

Span::~Span(void) {

	return ;
}

Span	&Span::operator=(Span const & rhs) {

	if (this == &rhs)
		return (*this);
	this->_N = rhs._N;
	this->_container = rhs._container;
	return (*this);
}

void	Span::addNumber(int value) {

	if (this->_container.size() == this->_N)
		throw std::range_error("Error : the container is full");
	this->_container.push_back(value);
}

void	Span::addRandomNumber(void) {

	for (unsigned int i = 0; i < this->_N; i++) {

		this->_container.push_back(rand());
	}
}

void	Span::addRangeIterator(std::vector<int>::iterator start, std::vector<int>::iterator end) {

	std::vector<int>	tmp(start, end);

	if (tmp.size() > (this->_N - this->_container.size()))
		throw std::range_error("Error : Cannot add this size of range iterator");
	copy(tmp.begin(), tmp.end(), std::back_inserter(this->_container));
}

int		Span::shortestSpan(void) const {

	std::vector<int>			tmp = this->_container;
	std::vector<int>::iterator	lowestIt;
	std::vector<int>::iterator	greatestIt;
	std::vector<int>::iterator	it;
	int							ret;

	if (this->_container.size() <= 1)
		throw std::range_error("Error : the container must contain at least 2 objects for run a span");
	sort(tmp.begin(), tmp.end());
	lowestIt = tmp.begin();
	greatestIt = tmp.end() - 1;
	ret = *greatestIt - *lowestIt;
	if (this->_container.size() == 2)
		return (ret);
	for (it = tmp.begin() + 1; it != tmp.end() - 1 && ret != 0; it++)
	{
		if (*(it + 1) - *it < ret)
			ret = *(it + 1) - *it;
	}
	return (ret);
}

int	Span::longestSpan(void) const {

	std::vector<int>			tmp = this->_container;
	std::vector<int>::iterator	lowestIt;
	std::vector<int>::iterator	greatestIt;
	int							ret;

	if (this->_container.size() <= 1)
		throw std::range_error("Error : the container must contain at least 2 objects for run a span");
	sort(tmp.begin(), tmp.end());
	lowestIt = tmp.begin();
	greatestIt = tmp.end() - 1;
	ret = *greatestIt - *lowestIt;
	return (ret);
}
