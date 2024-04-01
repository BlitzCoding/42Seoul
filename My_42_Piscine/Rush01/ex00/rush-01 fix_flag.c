/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fix_flag.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunjilee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:47:37 by eunjilee          #+#    #+#             */
/*   Updated: 2022/02/13 21:47:38 by eunjilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fix_flag_1(int box[4][4], int flag[4][4], int cond[4][4])
{
	int	i;
	int	j;

	j = 0;
	while (j < 4)
	{
		if (cond[0][j] == 4)
		{
			i = 0;
			while (i < 4)
			{
				box[i][j] = i + 1;
				flag[i][j] = 1;
				i++;
			}
		}
		j++;
	}
}

void	fix_flag_2(int box[4][4], int flag[4][4], int cond[4][4])
{
	int	i;
	int	j;

	j = 0;
	while (j < 4)
	{
		if (cond[1][j] == 4)
		{
			i = 0;
			while (i < 4)
			{
				box[i][j] = 4 - i;
				flag[i][j] = 1;
				i++;
			}
		}
		j++;
	}
}

void	fix_flag_3(int box[4][4], int flag[4][4], int cond[4][4])
{
	int	i;
	int	j;

	j = 0;
	while (j < 4)
	{
		i = 0;
		if (cond[2][j] == 4)
		{
			while (i < 4)
			{
				box[j][i] = i + 1;
				flag[j][i] = 1;
				i++;
			}
		}
		j++;
	}
	return ;
}

void	fix_flag_4(int box[4][4], int flag[4][4], int cond[4][4])
{
	int	i;
	int	j;

	j = 0;
	while (j < 4)
	{
		i = 0;
		if (cond[3][j] == 4)
		{
			i = 0;
			while (i < 4)
			{
				box[j][i] = 4 - i;
				flag[j][i] = 1;
				i++;
			}
		}
		j++;
	}
	return ;
}

void	fix_flag(int box[4][4], int flag[4][4], int cond[4][4])
{
	fix_flag_1(box, flag, cond);
	fix_flag_2(box, flag, cond);
	fix_flag_3(box, flag, cond);
	fix_flag_4(box, flag, cond);
	return ;
}
