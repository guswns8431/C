#include <unistd.h>

char				*ft_strncpy(char *dest, char *src, unsigned int a)
{
	unsigned int	i;
	char			*tmp;

	i = 0;
	tmp = dest;
	while (i < a)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	return (tmp);
}
