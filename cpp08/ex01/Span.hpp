/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:36:30 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/18 14:59:01 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>

class Span
{
	private:
		unsigned int arrSize;
		std::vector<int> arr;
	public:
		Span();
		Span(unsigned int n);
		Span(const Span &old);
		Span &operator=(const Span &old);
		~Span();
		
		void addNumber(int n);
		void addNumber(std::vector<int> src);
		int shortestSpan();
		int longestSpan();

		class TooFewElementsException: public std::exception
		{
			const char *what() const throw()
			{
				return "need more elements in span";
			}
		};

		class FullArrayException: public std::exception
		{
			const char *what() const throw()
			{
				return "span is full";
			}
		};
};

#endif