/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook_class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:14:38 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/09 16:17:11 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

class Phonebook
{
	public :

// first name, last name, nickname,
// phone number,darkest secret.

	Phonebook(void);
	~Phonebook(void);

	void		add(int i);
	void		format_print(void);
	void		search_users(void) const;
	void		search_user(void) const;

	int			index;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	std::string user;//remove this ?

	static int	get_nb_inst(void);

	private :

	static int	_nb_inst;
};

#endif