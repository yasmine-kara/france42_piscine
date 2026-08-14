//ft_strjoin
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
    {
		i++;
    }

	return (i);
}

void	ft_strcpy(char *dest, char *src, int *index)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[*index] = src[i];
		(*index)++;
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total;
	int		i;
	int		index;

	if (size == 0)
	{
		result = malloc(1);
		if (result == NULL)
			return (NULL);
		result[0] = '\0';
		return (result);
	}

	total = 0;

	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}

	total += (size - 1) * ft_strlen(sep);
	
    
    result = malloc(sizeof(char) * (total + 1));
	
    if (result == NULL)
    {
		return (NULL);
    }

	index = 0;
	
    i = 0;
	while (i < size)
	{
		ft_strcpy(result, strs[i], &index);
		if (i < size - 1)
			ft_strcpy(result, sep, &index);
		i++;
	}
	result[index] = '\0';
	return (result);
}