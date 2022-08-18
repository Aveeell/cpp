/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:01:45 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/18 11:20:17 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>

class ValueNotFoundException: public std::exception
{
	const char *what() const throw()
	{
		return "value not found";
	}
};

template <typename T>
typename T::iterator easyfind(T &cont, int toFind)
{
	typename T::iterator iter = std::find(cont.begin(), cont.end(), toFind);
	if(iter == cont.end())
		throw ValueNotFoundException();
	return iter;
}

#endif