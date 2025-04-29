/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:44:39 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/29 14:36:04 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "Serializer Default Constructor called" << std::endl;
}

Serializer::Serializer(const Serializer &obj)
{
	std::cout << "Serializer Copy Constructor called" << std::endl;
	*this = obj;
}
Serializer::~Serializer()
{
	std::cout << "Serializer Destructor called " << std::endl;
}

Serializer &Serializer::operator=(const Serializer &rhs)
{
	(void)rhs;
	std::cout << "Serializer Copy Assignment Operator called" << std::endl;
	return (*this);
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);
	std::cout << " " << raw << std::endl;
	return (raw);
}
Data*	Serializer::deserialize(uintptr_t raw)
{
	Data* ptr = reinterpret_cast<Data*>(raw);
	std::cout << " " << ptr << std::endl;
	return (ptr);
}
