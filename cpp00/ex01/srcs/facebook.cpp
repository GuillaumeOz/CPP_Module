/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   facebook.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:21:54 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/05 21:10:59 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "facebook.hpp"

int	main()
{
	std::string input;

	while (true)
	{
		std::cin >> input;
		switch (string(input))
		{
			case "EXIT":
				return (0);
				break;
			default:
				break;
		}
		// std::cout << input << std::endl;
		
	}


}