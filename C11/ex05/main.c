/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:21:07 by yonghlee          #+#    #+#             */
/*   Updated: 2022/02/22 15:27:20 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	add(int a, int b);
void	sub(int a, int b);
void	multi(int a, int b);
void	div(int a, int b);
void	modulo(int a, int b);
int		ft_atoi(char *str);

int	main(int argc, char **argv)
{
	void	(*f)(int, int);
	int		result;

	if (argc != 4)
		return (0);
	result = 0;
	if (argv[2][0] == '+')
		f = add;
	else if (argv[2][0] == '-')
		f = sub;
	else if (argv[2][0] == '*' )
		f = multi;
	else if (argv[2][0] == '/')
		f = div;
	else if (argv[2][0] == '%')
		f = modulo;
	else
	{
		write(1, "0\n", 2);
		return (0);
	}
	f(ft_atoi(argv[1]), ft_atoi(argv[3]));
	write(1, "\n", 1);
}
