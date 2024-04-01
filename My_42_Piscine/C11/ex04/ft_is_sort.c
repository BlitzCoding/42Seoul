int	up_sort(int *tab, int len, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < len - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	down_sort(int *tab, int len, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < len - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (length <= 1 || tab == 0)
		return (1);
	if (up_sort(tab, length, f) || down_sort(tab, length, f))
		return (1);
	return (0);
}
