/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 22:40:56 by rchahban          #+#    #+#             */
/*   Updated: 2024/04/03 19:44:43 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"



class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  iter( tab, 5, print<const int> );
  iter( tab2, 5, print<Awesome> );

  return 0;
}




// void addOne(int x) {
// 	std::cout << x + 1 << std::endl;
// }

// int main( void ) {
// 	// int numbers[] = {1, 2, 3, 4};
//   	// int size = sizeof(numbers) / sizeof(numbers[0]);
//   	// ::iter(numbers, size, addOne);
// 	int tab[] = { 0, 1, 2, 3, 4 };
  
// }