//ft_putstr
#include<unistd.h>

void    ft_putstr(char *str)
{
    char *c = str;
    while (*c != '\0')
    {
        write(1, c, 1);
        c++;
    }
}
/*void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	write(1, str, len);
}*/