/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:27:28 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/03 12:16:47 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

// Une fonction membre int toInt( void ) const;
// qui convertit la valeur en virgule fixe en nombre entier.


#include <iostream>
#include <cmath>

class Fixed 
{
	private:
		int _value;
		static const int _value_bits = 8;
  	public:
  		Fixed();
		Fixed(const int _nb);
  		Fixed(const Fixed& copy);
		Fixed(const float nb_f);
  		~Fixed();
  
	Fixed& operator=(const Fixed& copy);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

};

#endif