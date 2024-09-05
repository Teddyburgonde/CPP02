/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:30:37 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/05 09:59:57 by tebandam         ###   ########.fr       */
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

// Une fonction membre statique min prenant en paramètres deux références sur des
// nombres à virgule fixe et qui retourne le plus petit d’entre eux.

static Fixed& min(Fixed& fixed1, Fixed& fixed2)
{
    
}