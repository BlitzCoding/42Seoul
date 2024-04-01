/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fix_flag2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunjilee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:47:52 by eunjilee          #+#    #+#             */
/*   Updated: 2022/02/13 21:48:00 by eunjilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fix_flag_5(int box[4][4], int flag[4][4], int cond[4][4])
{
	int	j;

	j = 0;
	while (j < 4)
	{
		if (cond[0][j] == 1)
		{
			box[0][j] = 4;
			flag[0][j] = 1;
		}
		if (cond[1][j] == 1)
		{
			box[3][j] = 4;
			flag[3][j] = 1;
		}
		j++;
	}
}

void	fix_flag_6(int box[4][4], int flag[4][4], int cond[4][4])
{
	int	j;

	j = 0;
	while (j < 4)
	{
		if (cond[2][j] == 1)
		{
			box[j][0] = 4;
			flag[j][0] = 1;
		}
		if (cond[3][j] == 1)
		{
			box[j][3] = 4;
			flag[j][3] = 1;
		}
		j++;
	}
}

void	fix_flag2(int box[4][4], int flag[4][4], int cond[4][4])
{
	fix_flag_5(box, flag, cond);
	fix_flag_6(box, flag, cond);
	return ;
}
