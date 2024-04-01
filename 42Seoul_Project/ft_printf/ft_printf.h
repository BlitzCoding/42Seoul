/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:32:43 by yonghlee          #+#    #+#             */
/*   Updated: 2022/05/18 14:33:01 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	printf_char(int c);
int	printf_str(char *str);
int	printf_nbr(int nbr);
int	printf_usdnbr(unsigned int u);
int	printf_hexlower(unsigned int x);
int	printf_hexupper(unsigned int x);
int	printf_ptr(unsigned long long p);
int	printf_parse(char c, va_list *ap);
int	ft_printf(const char *str, ...);

#endif
