/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:53:16 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/19 15:26:14 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array()
{
	sizeArr = 0;
	arr = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	sizeArr = n;
	if(n > 0)
		arr = new T[n];
	else
		arr = NULL;
}

template <typename T>
Array<T>::Array(const Array &old)
{
	this->sizeArr = old.sizeArr;
	if(this->sizeArr == 0)
		arr = NULL;
	else
	{
		arr = new T[this->sizeArr];
		for(unsigned int i = 0; i < this->sizeArr; i++)
			this->arr[i] = old.arr[i];
	}
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &old)
{
	if(this != &old)
	{
		this->sizeArr = old.sizeArr;
		if(this->sizeArr == 0)
			arr = NULL;
		else
		{
			arr = new T[this->sizeArr];
			for(unsigned int i = 0; i < this->sizeArr; i++)
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
	if(index >= (int)this->sizeArr || index < 0)
		throw IndexOutOfBoundsException();
	else
		return this->arr[index];
}

template <typename T>
unsigned int Array<T>::size()
{
	return this->sizeArr;
}