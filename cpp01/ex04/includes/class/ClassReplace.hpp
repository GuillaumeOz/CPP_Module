/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassReplace.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:17:46 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/17 16:47:59 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSREPLACE_H
# define CLASSREPLACE_H

class Replace
{
	public :

	Replace();
	~Replace();

	bool	set_filename(std::string filename);
	bool	set_s1(std::string s1);
	bool	set_s2(std::string s2);
	bool	set_output_filename();

	void	replace_file(std::string filename, std::string s1, std::string s2);

	private :

	std::string _filename;
	std::string _s1;
	std::string _s2;
	std::string _output_filename;
};

#endif