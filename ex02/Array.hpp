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

template <typename T> class Array
{
	private:
		unsigned int size;
	public:
		Array();
		~Array();
		Array(unsigned int n);
		Array(const Array& anotherArr);
		Array& operator=(const Array& anotherArr);
		unsigned int size();
		class IndexOutOfBoundsException : public std::exception
		{
			virtual const char* what() const throw();
		};
};

#endif