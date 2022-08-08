/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:50:52 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:50:53 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int index;
	public:
		PhoneBook();
		~PhoneBook();
		void add();
		void search();
		void show(int i);
};

#endif