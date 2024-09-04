/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:30:37 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/04 17:18:21 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) 
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int _nb)
{
    std::cout << "Int constructor called" << std::endl;
    _value = _nb << _value_bits;
}

Fixed::Fixed(const float nb_f)
{
    std::cout << "Float constructor called" << std::endl;
    _value = roundf(nb_f * (1 << _value_bits));
}

Fixed::Fixed(const Fixed& copy) :_value(copy._value)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() 
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_value = other.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

float Fixed::toFloat(void) const
{
    return ((float)_value / (1 << _value_bits));
}

int Fixed::toInt(void) const
{
    return (_value >> _value_bits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return (os);
}

// i ?? 
// i++ ??
Fixed& Fixed::operator++()
{
    
}



	/* 
    Fixed operator+(const Fixed& fixed) const;
	Fixed operator-(const Fixed& fixed) const;
	Fixed operator*(const Fixed& fixed) const;
	Fixed operator/(const Fixed& fixed) const; 
    */

/* 
Les 4 opérateurs d’incrémentation et de décrémentation (pré-incrémentation et
post-incrémentation, pré-décrémentation et post-décrémentation) qui diminueront
la valeur du nombre à virgule fixe d’unité ϵ tel que 1 + ϵ > 1. 
*/