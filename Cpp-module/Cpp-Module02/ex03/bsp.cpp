/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 13:21:17 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/02 13:22:00 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point {
    private:
        Fixed const x;
        Fixed const y;

    public:
        Point();
        Point(float const _x, float const _y);
        Point(Fixed const _x, Fixed const _y);
        Point(Point const& _point);
        ~Point();

        Point const &operator = (Point const& _rhs);

        Fixed getX() const;
        Fixed getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);