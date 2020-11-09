#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int tmp[size];

	i = 0;
	while (i < size)
	{
		tmp[i] = tab[i];
		i++;
	}
	i = size - 1;
	j = 0;
	while (i >= 0)
	{
		tab[j] = tmp[i];
		j++;
		i--;
	}
}
