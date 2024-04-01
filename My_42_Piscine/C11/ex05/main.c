/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:21:07 by yonghlee          #+#    #+#             */
/*   Updated: 2022/02/24 19:49:38 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	add(int a, int b);
void	sub(int a, int b);
void	multi(int a, int b);
void	div(int a, int b);
void	modulo(int a, int b);
int		ft_atoi(char *str);
void	error(void);

int	main(int argc, char **argv)
{
	void	(*f[5])(int, int);
	int		result;

	f[0] = add;
	f[1] = sub;
	f[2] = multi;
	f[3] = div;
	f[4] = modulo;
	if (argc != 4)
		return (0);
	result = 0;
	if (argv[2][0] == '+')
		f[0](ft_atoi(argv[1]), ft_atoi(argv[3]));
	else if (argv[2][0] == '-')
		f[1](ft_atoi(argv[1]), ft_atoi(argv[3]));
	else if (argv[2][0] == '*' )
		f[2](ft_atoi(argv[1]), ft_atoi(argv[3]));
	else if (argv[2][0] == '/')
		f[3](ft_atoi(argv[1]), ft_atoi(argv[3]));
	else if (argv[2][0] == '%')
		f[4](ft_atoi(argv[1]), ft_atoi(argv[3]));
	else
		error();
}
