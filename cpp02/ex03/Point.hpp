#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point();
		Point(int j, int i);
		Point(const Fixed &old);
		~Point();

		Point& operator= (const Point &old);
};

#endif