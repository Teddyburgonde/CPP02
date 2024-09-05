/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:30:37 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/05 14:03:34 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) 
{
}

Fixed::Fixed(const int _nb)
{
    _value = _nb << _value_bits;
}

Fixed::Fixed(const float nb_f)
{
    _value = roundf(nb_f * (1 << _value_bits));
}

Fixed::Fixed(const Fixed& copy) :_value(copy._value)
{
}

Fixed::~Fixed() 
{
}

Fixed& Fixed::operator=(const Fixed& other)
{
    if (this != &other)
        this->_value = other.getRawBits();
    return (*this);
}

bool Fixed::operator>(const Fixed& fixed) const
{
    return (getRawBits() > fixed.getRawBits());
}

bool Fixed::operator<(const Fixed& fixed) const
{
    return (getRawBits() < fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed& fixed) const
{
    return (getRawBits() >= fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed& fixed) const
{
    return (getRawBits() <= fixed.getRawBits());
}

bool Fixed::operator==(const Fixed& fixed) const
{
    return (getRawBits() == fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed& fixed) const
{
    return (getRawBits() != fixed.getRawBits());
}

Fixed Fixed::operator+(const Fixed& fixed) const
{
    return(toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed& fixed) const
{
    return(toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed& fixed) const
{
    return(toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed& fixed) const
{
    return(toFloat() / fixed.toFloat());
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

Fixed& Fixed::operator++()
{
     _value++;
     return (*this);
}

Fixed& Fixed::operator--()
{
    _value--;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed   tmp(*this);
    operator++();
    return (tmp);
}

Fixed Fixed::operator--(int)
{
    Fixed   tmp(*this);
    operator--();
    return (tmp);
}

Fixed& Fixed::min(Fixed& fixed1, Fixed& fixed2)
{
    if (fixed1 < fixed2)
        return (fixed1);
    return (fixed2);
}

const Fixed& Fixed::min(const Fixed& fixed1, const Fixed& fixed2)
{
    if (fixed1 < fixed2)
        return (fixed1);
    return (fixed2);
}

Fixed& Fixed::max(Fixed& fixed1, Fixed& fixed2)
{
    if (fixed1 > fixed2)
        return (fixed1);
    return (fixed2);
}

const Fixed& Fixed::max(const Fixed& fixed1, const Fixed& fixed2)
{
    if (fixed1 > fixed2)
        return (fixed1);
    return (fixed2);
}
