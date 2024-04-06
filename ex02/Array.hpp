/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 01:58:07 by rchahban          #+#    #+#             */
/*   Updated: 2024/04/06 02:49:39 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T> 
class Array
{
	private:
		T *arr;
		unsigned int arrSize;
	public:
		Array() : arrSize(0)
		{
			this->arr = new T[this->arrSize];
			std::cout << "Array constructor called" << std::endl;
		}
		~Array()
		{
			if (this->arrSize)
				delete [] this->arr;
			std::cout << "Array destructor called" << std::endl;
		}
		Array(unsigned int n) : arrSize(n)
		{
			this->arrSize = new T[this->arrSize];
			std::cout << "Initialized array with " << this->size() << " elements." << std::endl;
		}
		Array(const Array& anotherArr) : arrSize(anotherArr.size())
		{
			*this = anotherArr;
			std::cout << "Array copy constructor called" << std::endl;
		}
		Array& operator=(const Array& anotherArr)
		{
			if (this->arr)
				delete [] this->arr;
			if (this != &anotherArr && this->size() > 0)
			{
				this->arrSize = anotherArr.size();
				this->arr = new T[this->arrSize];
				for (unsigned int x = 0 ; x < this->size(); x++)
				{
					this->arr[x] = anotherArr.arr[x];
				}
			}
			return *this;
		}
		T& operator[](unsigned int index)
		{
			if (this->arr == NULL || index >= this->size())
				throw IndexOutOfBoundsException();
			return this->arr[index];
		}
		unsigned int size() const
		{
			return this->arrSize;
		}
		class IndexOutOfBoundsException : public std::exception
		{
			virtual const char* what() const throw();
		};
};

template< typename T >
const char* Array<T>::InvalidIndexException::what() const throw()
{
	return ("Error: Index out of bounds");
}

#endif