/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:20:24 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/17 14:33:15 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

template<typename T>
typename T::iterator	easyfind(T &container, int occur)
{
	typename T::iterator	ret;

	ret = find(container.begin(), container.end(), occur);
	if (ret == container.end())
		return (container.end());
	return (ret);
}

#endif