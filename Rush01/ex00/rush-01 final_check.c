/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunjilee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:47:22 by eunjilee          #+#    #+#             */
/*   Updated: 2022/02/13 21:47:25 by eunjilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	up(int box[4][4], int cond[4][4])
{
	int	j;
	int	i;
	int	see;
	int	max;

	j = 0;
	while (j < 4)
	{	
		see = 1;
		max = box[0][j];
		i = 0;
		while (++i < 4)
		{
			if (max < box[i][j])
			{
				max = box[i][j];
				see++;
			}
		}
		if (cond[0][j] != see)
			return (0);
		j++;
	}
	return (1);
}

int	down(int box[4][4], int cond[4][4])
{
	int	j;
	int	i;
	int	see;
	int	max;

	j = 0;
	while (j < 4)
	{		
		see = 1;
		max = box[3][j];
		i = 3;
		while (--i >= 0)
		{
			if (max < box[i][j])
			{
				max = box[i][j];
				see++;
			}
		}
		if (cond[1][j] != see)
			return (0);
		j++;
	}
	return (1);
}

int	left(int box[4][4], int cond[4][4])
{
	int	i;
	int	j;
	int	see;
	int	max;

	i = 0;
	while (i < 4)
	{
		see = 1;
		max = box[i][0];
		j = 0;
		while (++j < 4)
		{
			if (max < box[i][j])
			{
				max = box[i][j];
				see++;
			}
		}
		if (cond[2][i] != see)
			return (0);
		i++;
	}
	return (1);
}

int	right(int box[4][4], int cond[4][4])
{
	int	i;
	int	j;
	int	see;
	int	max;

	i = 0;
	while (i < 4)
	{
		see = 1;
		max = box[i][3];
		j = 3;
		while (--j >= 0)
		{
			if (max < box[i][j])
			{
				max = box[i][j];
				see++;
			}
		}
		if (cond[3][i] != see)
			return (0);
		i++;
	}
	return (1);
}

int	final_check(int box[4][4], int cond[4][4])
{
	if (up(box, cond) && up(box, cond) && up(box, cond) && up(box, cond))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
