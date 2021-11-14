/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:14:38 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/14 12:28:42 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

class Phonebook
{
	public :

	Phonebook(void);
	~Phonebook(void);

	Contact			*get_user(int i);
	static Contact	users[8];
	static int		get_nb_inst(void);

	private :

	static int	_nb_inst;
};

#endif