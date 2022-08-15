/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:33:57 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/15 13:29:53 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef unsigned int uintptr_t;

struct Data
{
	int val = 13;
	std::string str = "kekw";
};

uintptr_t serialize(Data *ptr)
{
	uintptr_t addr;
	
	return addr;
}

Data *deserialize(uintptr_t raw)
{
	
}

int main()
{
	
	return 0;
}