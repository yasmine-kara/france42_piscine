//ft_print_comb
#include<unistd.h>

void	ft_putchar (char c)
{
    write(1,&c,1);
}

void	ft_print_comb(void)
{
    for(char i ='0';i<='7';i++)
	{
        for(char j = i+1; j<='8'; j++)
		{
            for(char k = j+1; k<='9'; k++)
			{
                ft_putchar(i);ft_putchar(j);ft_putchar(k);
                if (!(i=='7'&& j=='8' && k=='9'))
				{
                    ft_putchar(',');
                    ft_putchar(' ');
                }
            }
        }
    }
}

int main()
{
    ft_print_comb();
    return 0;
}
/*#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_vals(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				print_vals(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}*/
