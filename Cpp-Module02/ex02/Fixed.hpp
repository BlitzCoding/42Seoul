/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 13:00:01 by yonghlee          #+#    #+#             */
/*   Updated: 2022/12/31 13:19:00 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int                 fixed_point_number_value;
        static const int    fractional_bits = 8;
        
    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed const &fixed);
        
        Fixed const     &operator = (const Fixed &rhs);
        
        int             getRawBits() const;
        void            setRawBits( int const raw );

        float           toFloat() const;
        int             toInt() const;

        Fixed(int num);
        Fixed(float num);

        bool            operator>(Fixed const &ref) const;
        bool            operator<(Fixed const &ref) const;
        bool            operator>=(Fixed const &ref) const;
        bool            operator<=(Fixed const &ref) const;
        bool            operator==(Fixed const &ref) const;
        bool            operator!=(Fixed const &ref) const;

        Fixed const     operator+(Fixed const &ref);
        Fixed const     operator-(Fixed const &ref);
        Fixed const     operator*(Fixed const &ref);
        Fixed const     operator/(Fixed const &ref);

        Fixed const     operator++();
        Fixed const     operator++(int);
        Fixed const     operator--();
        Fixed const     operator--(int);

        Fixed static    min(Fixed a, Fixed b);
        Fixed static    max(Fixed a, Fixed b);
};

std::ostream    &operator<<(std::ostream &out, Fixed const &fixed);