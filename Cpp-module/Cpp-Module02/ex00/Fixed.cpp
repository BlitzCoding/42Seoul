/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 16:30:37 by yonghlee          #+#    #+#             */
/*   Updated: 2022/12/31 16:24:12 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    this->fixed_point_number_value = 0;
}

Fixed::Fixed(const Fixed& rhs)
{
    std::cout << "Copy constructor called\n";
	this->fixed_point_number_value = rhs.getRawBits();
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Copy assignment operator called\n";
    this->fixed_point_number_value = rhs.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    return this->fixed_point_number_value;
}

void Fixed::setRawBits(int const raw)
{
    this->fixed_point_number_value = raw;
}