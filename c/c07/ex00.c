//ft_strdup
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;
	int		len;

	len = 0;
	while (src[len])
    {
		len++;
    }
    
	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
    {
		return (NULL);
    }

	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
