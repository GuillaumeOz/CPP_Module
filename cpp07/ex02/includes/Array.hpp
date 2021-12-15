/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 11:50:59 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/15 16:16:55 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array {

	public:

	Array<T>(void) : _size(0), _array(NULL) {

		return ;
	}

	Array<T>(unsigned int n) : _size(n) {

		if (n <= 0) {

			this->_array = NULL;
			throw std::range_error("Range Error");
			return ;
		}
		this->_array = new T[n];
		for (int i = 0; i < this->_size; i++)
			this->_array[i] = 0;
		return ;
	}

	Array<T>(Array<T> const & src) {

		this->_size = 0;
		(*this) = src;
		return ;
	}

	~Array<T>(void) {

		if (this->_size > 0)
			delete [] this->_array;
		return ;
	}

	Array<T> &operator=(Array<T> const & rhs) {

		if (this == &rhs)
			return (*this);
		if (this->_size > 0)
			delete [] this->_array;
		this->_size = rhs._size;
		this->_array = new T[rhs._size];
		for (int i = 0; i < rhs._size; i++)
			this->_array[i] = rhs._array[i];
		return (*this);
	}

	T	&operator[](int const index) const {

		if (index < 0 || index > this->_size || index == this->_size)
			throw std::overflow_error("Overflow Error");
		return (this->_array[index]);
	}

	int	size(void) const {

		return (this->_size);
	}

	private:

	int		_size;
	T		*_array;
	
};

#endif