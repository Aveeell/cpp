/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:31:12 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/17 13:14:22 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T1, typename T2, typename T3>

void iter(T1 *arr, T2 len, T3 (*func)(T1 elem))
{
	for(int i = 0; i < len; i++)
	{
		std::cout << (*func)(arr[i]);
		if(i != len - 1)
			std::cout << ", ";
		else
			std::cout << std::endl;
	}
}

#endif