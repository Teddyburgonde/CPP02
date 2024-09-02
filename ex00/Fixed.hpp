/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:27:28 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/02 13:00:55 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {

  public:
  Fixed();
  ~Fixed();
  Fixed(const Fixed& other);
  Fixed& operator=(const Fixed& other);

  public:
  int getRawBits(void) const;
  void setRawBits(int const raw);

  private:
  int value;
  static const int nb_bits = 8;
};

#endif