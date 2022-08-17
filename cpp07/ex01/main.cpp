/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:35:29 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/17 12:15:32 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int factorial(int x)
{
	if(x == 0)
		return 1;
	return x * factorial(x - 1);
}

char printAlphabet(char c)
{
	return c;
}

float modElem(float x)
{
	return x * 1.3f;
}

int main()
{
	int arr[5] = {1, 2, 3, 4, 5};
	iter(arr, 5, factorial);

	char *alphabet = new char[26];
	for (int i = 0; i < 26; i++)
		alphabet[i] = 'a' + i;
	iter(alphabet, 26, printAlphabet);
	delete [] alphabet;
	
	float arr1[5] = {5.32f, 6.78f, 1.2f, 4.02f, 809.543f};
	iter(arr1, 5, modElem);
	return 0;
}