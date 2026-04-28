//ft_rev_int_tab

void    ft_rev_int_tab(int *tab, int size)
{
    int i = 0;
    int j = size -1;

    while(i < j)
    {
        int k;
        k = tab[i];
        tab[i] = tab[j];
        tab[j] = k;
        i++;
        j--;
    } 
}
/*void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[(size - 1) - i];
		tab[(size - 1) - i] = tmp;
		i++;
	}
}*/