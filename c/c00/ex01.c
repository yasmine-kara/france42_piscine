// ft_print_alphabet
#include <unistd.h>

void	ft_print_alphabet(void)
{
    for(char c='a'; c<='z'; c++){
        write (1, &c, 1);
    }
}
int main()
	{
    ft_print_alphabet();
    return 0;

}

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		ft_putchar(c++);
	}
}*/