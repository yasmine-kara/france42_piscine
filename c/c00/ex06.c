//ft_print_comb2
#include<unistd.h>

void	ft_putchar(char c)
{
    write(1,&c,1);
}

void	print_vals(int a, int b, int c, int d)
{
    ft_putchar(a+'0');
    ft_putchar(b+'0');
    ft_putchar(' ');
    ft_putchar(c+'0');
    ft_putchar(d+'0');

    if(!(a==9 && b==8))
	{
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void	ft_print_comb2(void)
{
    for(int i =0; i<=98; i++)
	{
        int digit1= i/10;
        int digit2= i%10;

        for(int j= i+1; j<=99; j++)
		{
            int digit3= j/10;
            int digit4= j%10;
            print_vals(digit1,digit2,digit3,digit4);
        }
    }
}

int main()
{
    ft_print_comb2();
    return 0;
}
/*#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_dual_digit(int n)
{
	ft_putchar(n / 10 + '0');
	ft_putchar(n % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a < 99)
	{
		while (b < 100)
		{
			print_dual_digit(a);
			ft_putchar(' ');
			print_dual_digit(b);
			if (a != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
		b = a + 1;
	}
}*/