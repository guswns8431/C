#include <unistd.h>

void	ft_print_comb(void)
{
	char num1;
	char num2;
	char num3;

	num1 = 48;
	while (num1 <= 55)
	{
		num2 = num1 + 1;
		while (num2 <= 56)
		{
			num3 = num2 + 1;
			while (num3 <= 57)
			{
				write(1, &num1, 1);
				write(1, &num2, 1);
				write(1, &num3, 1);
				write(1, ", ", 2);
				num3++;
			}
			num2++;
		}
		num1++;
	}
}
