/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:44:29 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/04 14:01:54 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
	    ~Brain();
	    Brain(const Brain& brain);

	    Brain& operator= (const Brain& brain);

        std::string getIdeas(int idx);
        void        setIdeas(std::string think);
};