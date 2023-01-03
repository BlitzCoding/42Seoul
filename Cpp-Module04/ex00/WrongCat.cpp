/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:24:53 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/03 17:24:53 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat Class Default Constructor\n";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Class Destroy\n";
}

WrongCat::WrongCat(const WrongCat& _rhs)
{
    (*this) = _rhs;
}

WrongCat& WrongCat::operator=(const WrongCat& _rhs)
{
    type = _rhs.type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat : meowwwwwwwwwwwwwww\n";
}