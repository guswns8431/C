#include <unistd.h>

void	ft_change_int_to_char(int num)
{
	char digit1;
	char digit2;

	digit1 = num / 10 + '0';
	digit2 = num % 10 + '0';
	write(1, &digit1, 1);
	write(1, &digit2, 1);
}

void	ft_print_comb2(void)
{
	int num1;
	int num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_change_int_to_char(num1);
			write(1, " ", 1);
			ft_change_int_to_char(num2);
			if (!(num1 == 98 && num2 == 99))
			{
				write(1, ", ", 2);
			}
			num2++;
		}
		num1++;
	}
}
