/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 20:35:48 by iyonghun          #+#    #+#             */
/*   Updated: 2023/01/03 14:33:34 by yonghlee         ###   ########.fr       */
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

		void attack(std::string const& _target);
		void highFiveGuys(void);
};