int		ft_iterative_power(int nb, int power)
{
	int i;
	int value;

	i = 1;
	value = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (i < power)
	{
		nb = nb * value;
		i++;
	}
	return (nb);
}
