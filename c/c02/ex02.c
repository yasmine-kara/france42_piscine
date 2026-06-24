//ft_str_is_alpha
int     ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    if (str[i] == '\0')
        return (1);

    while (str[i] != '\0')
    {
        if (!((str[i] >= 'A' && str[i] <= 'Z')
            || (str[i] >= 'a' && str[i] <= 'z')))
            return (0);
        i++;
    }
    return (1);
}
/*int	main(void)
{
	printf("hello: %d\n", ft_str_is_alpha("hello"));
	printf("HelloWorld: %d\n", ft_str_is_alpha("HelloWorld"));
	printf("HelloWorld123: %d\n", ft_str_is_alpha("Hello World 123"));

	return (0);
}*/
