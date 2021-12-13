/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StructData.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:36:09 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/13 15:54:51 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTDATA_HPP
# define STRUCTDATA_HPP

typedef struct	sData {

	std::string	data;
}				Data;

uintptr_t serialize(Data* ptr);

Data* deserialize(uintptr_t raw);

#endif