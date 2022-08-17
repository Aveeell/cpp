/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:05:14 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/17 13:14:44 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T max(const T &a, const T &b)
{
	if(a > b)
		return a;
	return b;
}

template <typename T>
T min(const T &a, const T &b)
{
	if(a < b)
		return a;
	return b;
}

#endif