/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:41:40 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/19 15:25:09 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array
{
	private:
		T *arr;
		unsigned int sizeArr;
	public:
		Array<T>();
		Array<T>(unsigned int n);
		Array<T>(const Array &old);
		Array &operator=(const Array &old);
		T &operator[](const int index);
		~Array<T>();

		class IndexOutOfBoundsException: public std::exception
		{
			const char *what() const throw()
			{
				return "index out of bounds";
			}
		};

		unsigned int size();
};

#include "Array.tpp"

#endif