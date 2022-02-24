/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:03:44 by yonghlee          #+#    #+#             */
/*   Updated: 2022/02/14 13:52:14 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int s1, int s2, char **argv)
{
	char	*temp;

	temp = argv[s1];
	argv[s1] = argv[s2];
	argv[s2] = temp;
}

void	print_argv(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	cmp;

	i = 1;
	if (argc < 1)
		return (0);
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			cmp = ft_strcmp(argv[i], argv[j]);
			if (cmp > 0)
				ft_swap(i, j, argv);
			j++;
		}
		i++;
	}
	print_argv(argc, argv);
	return (0);
}
