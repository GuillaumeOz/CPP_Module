/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:14:38 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/11 20:55:54 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

class Phonebook
{
	public :

	Phonebook(void);
	~Phonebook(void);

	void		add(int i);
	void		format_print(void);
	void		search_users(void) const;
	void		search_user(void) const;

	static int		get_nb_inst(void);
	static Contact	get_user(int i);

	private :

	Contact	users[8];
	static int	_nb_inst;
};

#endif