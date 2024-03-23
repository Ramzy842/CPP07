/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 22:41:03 by rchahban          #+#    #+#             */
/*   Updated: 2024/03/23 23:04:57 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T> void swap(T& x, T& y)
{
	T tmp = y;
	y = x;
	x = tmp;
}
template <typename T> T min(T x, T y)
{
	if (x < y)
		return x;
	else if (x > y)
		return y;
	return y;
}

template <typename T> T max(T x, T y)
{
	if (x > y)
		return x;
	else if (x < y)
		return y;
	return y;
}

#endif