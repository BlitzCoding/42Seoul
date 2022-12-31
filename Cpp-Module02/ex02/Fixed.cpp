/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 12:59:31 by yonghlee          #+#    #+#             */
/*   Updated: 2022/12/31 15:16:00 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixed_point_number_value = 0;
}

Fixed::~Fixed()
{

}

Fixed::Fixed(int num)
{
    this->fixed_point_number_value = num << this->fractional_bits;
}

Fixed::Fixed(float num)
{
    this->fixed_point_number_value = roundf(num * (1 << this->fractional_bits));
}

Fixed::Fixed(const Fixed &fixed) {
    *this = fixed;
}

Fixed const &Fixed::operator=(const Fixed &ref) {
    this->fixed_point_number_value = ref.getRawBits();
    return *this;
}

int Fixed::getRawBits() const {
    return this->fixed_point_number_value;
}

void Fixed::setRawBits(int const raw) {
    this->fixed_point_number_value = raw;
}

float Fixed::toFloat() const {
    return (float)this->fixed_point_number_value / (1 << this->fractional_bits);
}

int Fixed::toInt() const {
    return this->fixed_point_number_value >> this->fractional_bits;
}

std::ostream    &operator<<(std::ostream &out, Fixed const &ref)
{
    out << ref.toFloat();
    return out;
}

bool    Fixed::operator>(Fixed const &ref) const
{
    return this->fixed_point_number_value > ref.fixed_point_number_value;
}

bool    Fixed::operator<(Fixed const &ref) const
{
    return this->fixed_point_number_value < ref.fixed_point_number_value;
}

bool    Fixed::operator>=(Fixed const &ref) const
{
    return this->fixed_point_number_value >= ref.fixed_point_number_value;
}

bool    Fixed::operator<=(Fixed const &ref) const
{
    return this->fixed_point_number_value <= ref.fixed_point_number_value;
}

bool    Fixed::operator==(Fixed const &ref) const
{
    return this->fixed_point_number_value == ref.fixed_point_number_value;
}

bool    Fixed::operator!=(Fixed const &ref) const
{
    return this->fixed_point_number_value != ref.fixed_point_number_value;
}

Fixed const Fixed::operator+(Fixed const &ref)
{
    Fixed   tmp(toFloat() + ref.toFloat());
    return tmp;
}

Fixed const Fixed::operator-(Fixed const &ref)
{
    Fixed   tmp(toFloat() - ref.toFloat());
    return tmp;
}

Fixed const Fixed::operator*(Fixed const &ref)
{
    Fixed   tmp(toFloat() * ref.toFloat());
    return tmp;
}

Fixed const Fixed::operator/(Fixed const &ref)
{
    Fixed   tmp(toFloat() / ref.toFloat());
    return tmp;
}

Fixed const Fixed::operator++()
{
    ++this->fixed_point_number_value;
    return *this;
}

Fixed const  Fixed::operator++(int)
{
    Fixed   tmp;

    tmp = *this;
    this->fixed_point_number_value++;
    return tmp;
}

Fixed const Fixed::operator--()
{
    --this->fixed_point_number_value;
    return *this;
}

Fixed const Fixed::operator--(int)
{
    Fixed   tmp;

    tmp = *this;
    this->fixed_point_number_value--;
    return tmp;
}

Fixed   Fixed::min(Fixed a, Fixed b) {
    if (a < b)
        return a;
    else
        return b;
}

Fixed   Fixed::max(Fixed a, Fixed b) {
    if (a > b)
        return a;
    else
        return b;
}