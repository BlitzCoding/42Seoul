/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 10:48:42 by yonghlee          #+#    #+#             */
/*   Updated: 2022/12/27 10:51:01 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Harl
{
    private:
        void debug();
        void info();
        void warning();
        void error();
    public:
        Harl();
        ~Harl();
        void complain(std::string level);
};