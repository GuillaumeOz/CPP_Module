/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:56:42 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/13 18:49:44 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trueType.hpp"

int	main() {

	Base *base;

	std::cout << "------Ptr Tests------" << std::endl;
	base = generate();
	identify(base);
	delete base;
	base = generate();
	identify(base);
	delete base;
	base = generate();
	identify(base);
	delete base;
	base = generate();
	identify(base);
	delete base;
	base = generate();
	identify(base);
	delete base;
	std::cout << "------Ref Tests------" << std::endl;
	base = generate();
	identify(*base);
	delete base;
	base = generate();
	identify(*base);
	delete base;
	base = generate();
	identify(*base);
	delete base;
	base = generate();
	identify(*base);
	delete base;
	base = generate();
	identify(*base);
	delete base;
}
