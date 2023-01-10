/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyonghun <iyonghun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:16:49 by iyonghun          #+#    #+#             */
/*   Updated: 2023/01/10 19:10:03 by iyonghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Convert
{
    private:
        std::string str;
    public:
        Convert();
        Convert(std::string _str);
        Convert(Convert const &_rhs);
        ~Convert();

        Convert &operator=(Convert const &_rhs);

        void convertChar(std::string _str);
        void convertFloat(std::string _str);
        void convertDouble(std::string _str);
        void convertInt(std::string _str);
};