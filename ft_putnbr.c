#include <unistd.h>

void		ft_is_negative(int *num, int *is_negative)
{
	if (*num < 0)
	{
		*num *= -1;
		*is_negative = 1;
	}
}

void		ft_putnbr(int nb)
{
	char	buf[10];
	int		index;
	int		is_negative;

	index = 0;
	ft_is_negative(&nb, &is_negative);
	while (1)
	{
		buf[index++] = nb % 10 + '0';
		nb /= 10;
		if (nb < 10)
		{
			buf[index] = nb % 10 + '0';
			break ;
		}
	}
	if (is_negative == 1)
	{
		write(1, "-", 1);
	}
	while (index >= 0)
	{
		write(1, &buf[index], 1);
		index--;
	}
}
