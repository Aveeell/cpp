/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:52:42 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:52:43 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int value;
		static const int bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &old);
		Fixed(const int val);
		Fixed(const float val);
		~Fixed();
		Fixed& operator= (const Fixed &old);
		int getRawBits() const;
		void setRawBits(int const raw);
		int toInt() const;
		float toFloat() const;
};

std::ostream& operator<< (std::ostream &out, const Fixed &fixed);

#endif