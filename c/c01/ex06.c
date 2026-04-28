//ft_strlen

int     ft_strlen(char *str)
{
    int i=0;
    while(str[i])
    {
        i++;
    }
    return (i);
}
/*int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	main(void)
{
	char	*str;

	str = "Hello World!\n";
	printf("%d\n", ft_strlen(str));
	return (0);
}*/