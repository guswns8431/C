#include <unistd.h>

void	ft_printhello(char c)
{
	write(1,&c,1);
}
