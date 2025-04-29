/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:49:22 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/29 16:28:16 by vlaggoun         ###   ########.fr       */
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
	A	a;
	B	b;
	C	c;

	a = dynamic_cast<*A>(p);
	b = dynamic_cast<*B>(p);
	c = dynamic_cast<*C>(p);
}

void	identify(Base &p)
{
	A	&a;
	B	&b;
	C	&c;

	a = dynamic_cast<*A>(p);
	b = dynamic_cast<*B>(&p);	
	c = dynamic_cast<*C>(&p);
}
