/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:56:21 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/17 17:47:27 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

class Karen
{
	public :

	Karen();
	~Karen();

	void complain( std::string level );

	private :

	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
};

#endif