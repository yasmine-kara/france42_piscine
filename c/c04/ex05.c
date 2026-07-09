//ft_atoi_base
int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
		i++;
	if (i < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| (base[i] >= 9 && base[i] <= 13)
			|| base[i] == 32)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_base_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	base_len;
	int	value;

	base_len = ft_check_base(base);
	if (base_len == 0)
		return (0);

	i = 0;
	sign = 1;
	result = 0;

	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;

	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}

	value = ft_base_index(str[i], base);
	while (value != -1)
	{
		result = result * base_len + value;
		i++;
		value = ft_base_index(str[i], base);
	}
	return (result * sign);
}