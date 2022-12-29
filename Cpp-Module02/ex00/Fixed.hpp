/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 16:28:39 by yonghlee          #+#    #+#             */
/*   Updated: 2022/12/29 16:37:45 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
    private:
        int fixed_point_number_value;
        static const int fractional_bits;
    
    public:
        Fixed();
        Fixed(const Fixed& rhs);
        ~Fixed();
        Fixed& operator=(const Fixed &rhs);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};