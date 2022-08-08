/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:52:53 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 12:01:05 by jerrok           ###   ########.fr       */
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
		
		bool operator== (Fixed fixed) const;
		bool operator!= (Fixed fixed) const;
		bool operator< (Fixed fixed) const;
		bool operator> (Fixed fixed) const;
		bool operator<= (Fixed fixed) const;
		bool operator>= (Fixed fixed) const;

		float operator+ (Fixed fixed) const;
		float operator- (Fixed fixed) const;
		float operator* (Fixed fixed) const;
		float operator/ (Fixed fixed) const;

		Fixed operator++ ();
		Fixed operator-- ();
		Fixed operator++ (int);
		Fixed operator-- (int);

		int getRawBits() const;
		void setRawBits(int const raw);
		int toInt() const;
		float toFloat() const;

		static Fixed &min(Fixed &one, Fixed &two);
		static const Fixed &min(const Fixed &one, const Fixed &two);
		static Fixed &max(Fixed &one, Fixed &two);
		static const Fixed &max(const Fixed &one, const Fixed &two);
};

std::ostream& operator<< (std::ostream &out, const Fixed &fixed);

#endif