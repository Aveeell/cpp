/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:52:23 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:52:24 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
	private:
		void debug();
		void info();
		void warning();
		void error();
	public:
		Harl();
		~Harl();
		void complain(std::string level);
};

#endif