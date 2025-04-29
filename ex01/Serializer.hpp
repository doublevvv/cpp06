/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 09:59:35 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/29 14:35:51 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include "Data.hpp"
#include <stdint.h>

// * Integer type capable of holding a value converted from a void pointer and
// * then be converted back to that type with a value that compares equal to the original pointer.

class Serializer
{
	public:
		Serializer();
		~Serializer();
		Serializer(Serializer const &obj);
		Serializer &operator=(const Serializer &rhs);
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif
