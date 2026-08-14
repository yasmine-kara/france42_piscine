//ft_range 
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
    {
		return (NULL);
    }

	range = malloc(sizeof(int) * (max - min));

	if (range == NULL)
    {
		return (NULL);
    }
    
	i = 0;
	while (i < max - min)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}