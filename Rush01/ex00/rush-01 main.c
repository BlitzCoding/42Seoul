/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:29:44 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/02/13 20:34:02 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush01(int cond[4][4]);
void	init_array(int array[4][4]);
int		argv_check(char *str);

void	parse_argv(int cond[4][4], char *str)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		cond[i / 4][i % 4] = *str - '0';
		str += 2;
		i++;
	}
	return ;
}

int	main(int argc, char *argv[])
{
	int	cond[4][4];

	init_array(cond);
	if (argc == 2)
	{
		if (argv_check(argv[1]))
		{
			parse_argv(cond, argv[1]);
			rush01(cond);
		}
	}
	else
	{
		write(1, "Error\n", 6);
	}
	return (0);
}
