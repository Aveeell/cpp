/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:53:16 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/17 15:14:22 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array()
{
	size = 0;
	arr = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	size = n;
	if(n > 0)
		arr = new T[n];
	else
		arr = NULL;
}

template <typename T>
Array<T>::Array(const Array &old)
{
	this->size = old.size;
	if(this->size == 0)
		arr = NULL;
	else
	{
		arr = new T[this->size];
		for(unsigned int i = 0; i < this->size; i++)
			this->arr[i] = old.arr[i];
	}
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &old)
{
	if(this != &old)
	{
		this->size = old.size;
		if(this->size == 0)
			arr = NULL;
		else
		{
			arr = new T[this->size];
			for(unsigned int i = 0; i < this->size; i++)
				this->arr[i] = old.arr[i];
		}
	}
	return *this;
}

template <typename T>
Array<T>::~Array()
{
	delete [] arr;
}

template <typename T>
T &Array<T>::operator[](const int index)
{
	if(index >= (int)this->size || index < 0)
		throw IndexOutOfBoundsException();
	else
		return this->arr[index];
}
