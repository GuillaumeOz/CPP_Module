/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:21:22 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/30 21:30:28 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnimalPurify.hpp"

int main()
{
	const AAnimal* animalHorde[6];
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	Brain*	brain;

	std::cout << std::endl;

	for (int i = 0; i < 6; i++)
	{
		if ((i % 2) == 0)
			animalHorde[i] = new Cat();
		else
			animalHorde[i] = new Dog();
	}
	for (int i = 0; i < 6; i++)
		std::cout << i << " " << animalHorde[i]->getType() << std::endl;

	std::cout << std::endl;
	
	brain = animalHorde[0]->getBrain();
	brain->ideas[0] = "I'm so ussless...";
	std::cout << animalHorde[0]->getType() << " think : " << brain->ideas[0] << std::endl;
	brain = animalHorde[1]->getBrain();
	brain->ideas[0] = "I'm so usefull !";
	std::cout << animalHorde[1]->getType() << " think : " << brain->ideas[0] << std::endl;

	std::cout << std::endl;

	delete j;//should not create a leak
	delete i;
	for (int i = 0; i < 6; i++)
		delete animalHorde[i];
	return (0);
}
