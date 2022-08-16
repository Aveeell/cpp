/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:33:57 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/16 14:12:53 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	int val;
	std::string str;
	char c;
};

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int	main()
{
	Data *test = new Data;
	test->val = 13;
	test->str = "kekw";
	test->c = 'a';
	
	std::cout << "address: " << test << std::endl;
	std::cout << "val: " << test->val << std::endl;
	std::cout << "str: " << test->str << std::endl;
	std::cout << "c: " << test->c << std::endl << std::endl;

	std::cout << "------------------serialization--------------------" << std::endl;
	uintptr_t buffer = serialize(test);
	std::cout << test << " -> " << buffer << std::endl;
	std::cout << "---------------------------------------------------" << std::endl << std::endl;

	std::cout << "-----------------deserialization-------------------" << std::endl;
	Data *testDeserialize = deserialize(buffer);
	std::cout << "address: " << testDeserialize << std::endl;
	std::cout << "val: " << testDeserialize->val << std::endl;
	std::cout << "str: " << testDeserialize->str << std::endl;
	std::cout << "c: " << testDeserialize->c << std::endl;
	delete test;
}