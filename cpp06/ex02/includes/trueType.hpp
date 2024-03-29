/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trueType.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:28:04 by gozsertt          #+#    #+#             */
/*   Updated: 2021/12/13 18:48:48 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRUETYPE_HPP
# define TRUETYPE_HPP

#include <iostream>
#include <cstdlib>
#include "ClassBase.hpp"
#include "ClassA.hpp"
#include "ClassB.hpp"
#include "ClassC.hpp"

Base * generate(void);
void identify(Base * p);
void identify( Base & p);

#endif