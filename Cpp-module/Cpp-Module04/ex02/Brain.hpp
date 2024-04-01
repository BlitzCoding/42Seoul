/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:44:29 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/06 17:08:17 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
    public:
        std::string ideas[100];

        Brain();
	    ~Brain();
	    Brain(const Brain& brain);

	    Brain& operator= (const Brain& brain);
};