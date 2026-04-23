#include <unistd.h>

void	ft_print_numbers(void)
{
    for (char c = '0'; c <= '9'; c++) {
        write(1, &c, 1);
    }
}

int main()
{
    ft_print_numbers();
    return 0;
}
/*#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	while (c <= '9')
	{
		ft_putchar(c++);
	}
}*/