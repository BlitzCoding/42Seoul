/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:16:11 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/03 17:24:38 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public :  
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat& _rhs);
        WrongCat &operator=(const WrongCat& _rhs);
        void makeSound() const;
};