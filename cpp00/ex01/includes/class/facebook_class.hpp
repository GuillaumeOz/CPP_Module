/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   facebook_class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:14:38 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/08 20:36:36 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FACEBOOK_CLASS_HPP
# define FACEBOOK_CLASS_HPP

class Facebook
{
	public :

// first name, last name, nickname,
// phone number,darkest secret.

	Facebook(void);
	~Facebook(void);

	void add(int i);
	// void		search();

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