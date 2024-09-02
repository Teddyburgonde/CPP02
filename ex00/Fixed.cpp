/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:30:37 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/02 13:09:44 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0) {}

Fixed::Fixed(const Fixed& other) : value(other.value){}

Fixed::~Fixed() {}


int Fixed::getRawBits(void) const
{
    return (this->value);
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    if (this != &other)
        this->value = other.value;
    return (*this);
}
