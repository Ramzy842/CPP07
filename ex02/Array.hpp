/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 01:58:07 by rchahban          #+#    #+#             */
/*   Updated: 2024/05/05 19:57:15 by rchahban         ###   ########.fr       */
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
			if (this->arr)
				delete [] this->arr;
			std::cout << "Array destructor called" << std::endl;
		}
		Array(unsigned int n) : arrSize(n)
		{
			this->arr = new T[this->arrSize];
			std::cout << "Initialized array with " << this->size() << " elements." << std::endl;
		}
		Array(const Array& anotherArr) : arrSize(anotherArr.size())
		{
			this->arr = NULL;
			*this = anotherArr;
			std::cout << "Array copy constructor called" << std::endl;
		}
		Array& operator=(const Array& anotherArr)
		{
			if (this->arr)
				delete [] this->arr;
			if (this != &anotherArr && anotherArr.size() > 0)
			{
				this->arrSize = anotherArr.size();
				this->arr = new T[this->arrSize];
				for (unsigned int x = 0 ; x < this->size(); x++)
				{
					this->arr[x] = anotherArr.arr[x];
				}
			}
			std::cout << "Array copy assignment operator called" << std::endl;
			return *this;
		}
		T& operator[](unsigned int index)
		{
			if (this->arr == NULL || index >= this->size())
			{
				std::cout << "index: " << index << std::endl;
				throw IndexOutOfBoundsException();
			}
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
const char* Array<T>::IndexOutOfBoundsException::what() const throw()
{
	return ("Error: Index out of bounds");
}

#endif