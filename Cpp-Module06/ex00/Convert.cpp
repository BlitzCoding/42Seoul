/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyonghun <iyonghun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:06:40 by iyonghun          #+#    #+#             */
/*   Updated: 2023/01/10 19:12:31 by iyonghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

        // Convert();
        // Convert(std::string _str);
        // Convert(Convert const &_rhs);
        // ~Convert();

        // Convert &operator=(Convert const &_rhs);

        // void convertChar(std::string _str);
        // void convertFloat(std::string _str);
        // void convertDouble(std::string _str);
        // void convertInt(std::string s_tr);

Convert::Convert()
{
    
}

Convert::Convert(std::string _str)
{
    this->str = _str;
}

Convert::Convert(Convert const& _rhs)
{
    (*this) = _rhs;
}

Convert::~Convert()
{

}

Convert& Convert::operator=(Convert const& _rhs)
{
    this->str = _rhs.str;
    return (*this);
}