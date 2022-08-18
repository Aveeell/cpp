/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:21:20 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/18 14:34:03 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>

class MutantStack: public std::stack<T>
{
public:
	MutantStack(): std::stack<T>() {};
	MutantStack(const MutantStack &old): std::stack<T>(old) {};
	MutantStack &operator=(const MutantStack &old)
	{
		std::stack<T>::operator=(old);
		return *this;
	};
	~MutantStack(void){};

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }
};

#endif
