//ft_ten_queens_puzzle
#include <unistd.h>

int	g_board[10];
int	g_count;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_solution(void)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = g_board[i] + '0';
		ft_putchar(c);
		i++;
	}
	ft_putchar('\n');
}

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	ft_is_safe(int col, int row)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (g_board[i] == row)
			return (0);
		if (ft_abs(g_board[i] - row) == ft_abs(i - col))
			return (0);
		i++;
	}
	return (1);
}

void	ft_solve(int col)
{
	int	row;

	if (col == 10)
	{
		ft_print_solution();
		g_count++;
		return ;
	}
	row = 0;
	while (row < 10)
	{
		if (ft_is_safe(col, row))
		{
			g_board[col] = row;
			ft_solve(col + 1);
		}
		row++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	g_count = 0;
	ft_solve(0);
	return (g_count);
}