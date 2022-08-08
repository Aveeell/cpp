/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:54:49 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:54:50 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	protected:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain &old);
		Brain& operator= (const Brain &old);
		virtual ~Brain();
};

#endif
