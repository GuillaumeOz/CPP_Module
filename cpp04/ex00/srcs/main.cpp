/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:21:22 by gozsertt          #+#    #+#             */
/*   Updated: 2021/11/27 17:24:00 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete *meta;
	delete *j;
	delete *i;
}

class Sample {

	public:

		// Constructors and destructor
		Sample(void);
		Sample(const Sample &src);
		virtual ~Sample();

		// Operator overloads
		Sample&	operator=(const Sample &rhs);

		// Member functions

	private:

		Sample();

		// Internal functions

		// Attributes

};