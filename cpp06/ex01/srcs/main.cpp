/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:41:22 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/13 16:23:52 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

int	main(void)
{
	Data		data;
	Data		*dataPtr;
	uintptr_t	raw;

	data.data = "Coucou";
	raw = serialize(&data);
	dataPtr = deserialize(raw);
	std::cout << "Content of data = " << dataPtr->data << std::endl;
}
