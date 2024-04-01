/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 16:38:48 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/02 10:21:57 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int                 fixed_point_number_value;
        static const int    fractional_bits = 8;
    
    public:
        Fixed();
        Fixed(const Fixed& rhs);
        Fixed(const int num);
        Fixed(const float num);
        ~Fixed();

        Fixed& operator=(const Fixed &rhs);
        
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream& operator <<(std::ostream &out, const Fixed &fixed);