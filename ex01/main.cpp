/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 22:40:56 by rchahban          #+#    #+#             */
/*   Updated: 2024/03/23 23:38:46 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


void addOne(int x) {
	std::cout << x + 1 << std::endl;
}

int main( void ) {
	int numbers[] = {1, 2, 3, 4};
  	int size = sizeof(numbers) / sizeof(numbers[0]);

  	::iter(numbers, size, addOne);
}