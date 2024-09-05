/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:27:28 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/05 13:08:54 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP


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
	
	bool operator>(const Fixed& fixed) const;
	bool operator<(const Fixed& fixed) const;
	bool operator>=(const Fixed& fixed) const;
	bool operator<=(const Fixed& fixed) const;
	bool operator==(const Fixed& fixed) const;
	bool operator!=(const Fixed& fixed) const;

	Fixed operator+(const Fixed& fixed) const;
	Fixed operator-(const Fixed& fixed) const;
	Fixed operator*(const Fixed& fixed) const;
	Fixed operator/(const Fixed& fixed) const;
	
	Fixed& operator++(); //prefix increment operator
	Fixed operator++(int); //postfix increment operator
	Fixed& operator--(); //prefix decrement operator
	Fixed operator--(int); //postfix decrement operator

	static Fixed& min(Fixed& fixed1, Fixed& fixed2);
	static const Fixed& min(const Fixed& fixed1, const Fixed& fixed2);
	static Fixed& max(Fixed& fixed1, Fixed& fixed2);
	static const Fixed& max(const Fixed& fixed1, const Fixed& fixed2);
	

	friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
};

#endif
