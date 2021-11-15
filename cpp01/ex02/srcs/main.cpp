/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:45:26 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/15 19:32:43 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string braaain = "HI THIS IS BRAIN";
	std::string *string_ptr = &braaain;
	std::string &string_ref = braaain;

	std::cout << std::endl;
	std::cout << "Address of the string : " << &braaain << std::endl;
	std::cout << "Address of the string by using string_ptr: " << string_ptr << std::endl;
	std::cout << "Address of the string by using string_ref: " << &string_ref << std::endl;
	std::cout << std::endl;
	std::cout << "String by using string_ptr: " << *string_ptr << std::endl;
	std::cout << "String by using string_ref: " << string_ref << std::endl;
	std::cout << std::endl;

	return (0);
}
