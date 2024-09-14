int ft_str_is_alpha(char *str)
{
	int i;

	if (!str)
		return (1);
	i = 0;
	while(str[i])
	{
		if (str[i] < 'a' || str[i] > 'z'  ||
		    str[i] < 'A' || str[i] > 'Z')
			return 0;
		i++;
	}
	return 1;

}
