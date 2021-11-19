/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassReplace.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 20:13:47 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/18 12:27:40 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

Replace::Replace()
{
	return ;
}

Replace::~Replace()
{
	return ;
}

bool	Replace::set_filename(std::string filename)
{
	if (filename == "")
	{
		std::cout << "Error : filename argument is empty" << std::endl;
		return (false);
	}
	this->_filename = filename;
	return (true);
}

bool	Replace::set_s1(std::string s1)
{
	if (s1 == "")
	{
		
		std::cout << "Error : s1 argument is empty" << std::endl;
		return (false);
	}
	this->_s1 = s1;
	return (true);
}

bool	Replace::set_s2(std::string s2)
{
	if (s2 == "")
	{
		std::cout << "Error : s2 argument is empty" << std::endl;
		return (false);
	}
	this->_s2 = s2;
	return (true);
}

bool	Replace::set_output_filename()
{
	std::ostringstream	upper_output;
	size_t				i;

	i = 0;
	this->_output_filename = this->_filename;
	upper_output.str(this->_output_filename);
	while (i < this->_output_filename.length())
	{
		upper_output << (char)toupper(this->_filename.at(i));
		i++;
	}
	this->_output_filename = upper_output.str();
	this->_output_filename += ".replace";
	return (true);
}

void	Replace::replace_file(std::string filename, std::string s1, std::string s2)
{
	std::string	line;
	size_t		s1_len;

	if (this->set_filename(filename) == false)
		return ;
	if (this->set_s1(s1) == false)
		return ;
	if (this->set_s2(s2) == false)
		return ;
	s1_len = s1.length();
	this->set_output_filename();
	std::ifstream	ifs(this->_filename.c_str());
	std::ofstream	ofs(this->_output_filename.c_str());
	while (std::getline(ifs, line, '\n'))
	{
		for (size_t pos = 0; pos < line.length(); pos++)
		{
			if (line.compare(pos, s1_len, _s1) == 0)
			{
				line.erase(pos, s1_len);
				line.insert(pos, _s2);
				pos += s1_len;
			}
		}
		ofs << line << std::endl;
	}
	ifs.close();
	ofs.close();
}
