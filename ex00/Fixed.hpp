/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:27:28 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/02 20:42:05 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed 
{
  private:
  int _value;
  static const int _nb_bits = 8;

  public:
  Fixed();
  Fixed(const Fixed& copy);

  ~Fixed();
  
  Fixed& operator=(const Fixed& copy);

  public:
  int getRawBits(void) const;
  void setRawBits(int const raw);

};

#endif