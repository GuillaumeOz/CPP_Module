/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 17:20:58 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/14 18:12:13 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main() {

	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return 0;

	// int a = 42;
	// int b = 84;
	// char c = 'c';
	// char d = 'd';
	// std::string e = "coucou";
	// std::string f = "salut";

	// std::cout << "---SWAP---" << std::endl;
	// std::cout << "---INT---" << std::endl;
	// std::cout << "a = " << a << std::endl;
	// std::cout << "b = " << b << std::endl;
	// swap<int>(a, b);
	// std::cout << "a = " << a << std::endl;
	// std::cout << "b = " << b << std::endl;
	// std::cout << "---CHAR---" << std::endl;
	// std::cout << "c = " << c << std::endl;
	// std::cout << "d = " << d << std::endl;
	// swap(c, d);
	// std::cout << "c = " << c << std::endl;
	// std::cout << "d = " << d << std::endl;
	// std::cout << "---STRING---" << std::endl;
	// std::cout << "e = " << e << std::endl;
	// std::cout << "f = " << f << std::endl;
	// swap(e, f);
	// std::cout << "e = " << e << std::endl;
	// std::cout << "f = " << f << std::endl;
	// swap(a, b);
	// swap(c, d);
	// swap(e, f);
	// std::cout << "---MIN---" << std::endl;
	// std::cout << "---INT---" << std::endl;
	// std::cout << min(a, b) << std::endl;
	// std::cout << "---CHAR---" << std::endl;
	// std::cout << min<char>(c, d) << std::endl;
	// std::cout << "---MAX---" << std::endl;
	// std::cout << "---INT---" << std::endl;
	// std::cout << max<int>(a, b) << std::endl;
	// std::cout << "---CHAR---" << std::endl;
	// std::cout << max(c, d) << std::endl;

	// return (0);
}
