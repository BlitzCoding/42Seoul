/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyonghun <iyonghun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 20:35:48 by iyonghun          #+#    #+#             */
/*   Updated: 2023/01/02 20:38:07 by iyonghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	private:

	public:
		FragTrap();
		FragTrap(const FragTrap& _rhs);
		FragTrap(std::string _name);
		~FragTrap();

		FragTrap &operator=(const FragTrap& rhs);

		void highFiveGuys(void);
};