/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:49:22 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/30 13:09:01 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
	int	i;
	Base *instance;

	i = rand();
	if (i % 3 == 0)
		instance = new A;
	else if (i % 3 == 1)
		instance = new B;
	else
		instance = new C;
	return (instance);
}

void	identify(Base* p)
{
	A	*a;
	B	*b;
	C	*c;

	a = dynamic_cast<A *>(p);
	if (a != NULL)
		std::cout << "object pointed to A" << std::endl;
	b = dynamic_cast<B *>(p);
	if (b != NULL)
		std::cout << "object pointed to B" << std::endl;
	c = dynamic_cast<C *>(p);
	if (c != NULL)
		std::cout << "object pointed to C" << std::endl;
	return ;
}

void	identify(Base &p)
{
	try
	{

		A	&a = dynamic_cast<A&>(p);
		std::cout << "p is referenced by A" << std::endl;
		static_cast<void>(a);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		B	&b = dynamic_cast<B&>(p);
		std::cout << "p is referenced by B" << std::endl;
		static_cast<void>(b);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		C	&c = dynamic_cast<C&>(p);
		std::cout << "p is referenced by C" << std::endl;
		static_cast<void>(c);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return ;
}

int	main()
{
	std::cout << "** Identify per pointer Test **" << std::endl;
	Base	*a1 = new A;
	std::cout << "Give a type A" << std::endl;
	identify(a1);
	Base	*b1 = new B;
	std::cout << "Give a type B" << std::endl;
	identify(b1);
	Base	*c1 = new C;
	std::cout << "Give a type C" << std::endl;
	identify(c1);
	std::cout << std::endl;

	std::cout << "** Identify per reference Test **" << std::endl;
	Base	&a2 = *a1;
	std::cout << "Give a type A" << std::endl;
	identify(a2);
	Base	&b2 = *b1;
	std::cout << "Give a type B" << std::endl;
	identify(b2);
	Base	&c2 = *c1;
	std::cout << "Give a type C" << std::endl;
	identify(c2);
	delete a1;
	delete b1;
	delete c1;
	std::cout << std::endl;

	std::cout << "** Identify Random Test **" << std::endl;
	Base	*r1 = generate();
	identify(r1);
	Base	*r2 = generate();
	identify(r2);
	Base	*r3	 = generate();
	identify(r3);
	Base	*r4 = generate();
	identify(r4);
	delete r1;
	delete r2;
	delete r3;
	delete r4;
}
