#include "libft.h"

void ft_putchar_fd(char c, int fd);

void ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		n = n % 10 ;
	}
	if (n < 10)
	{
		ft_putchar_fd(n + 48, fd);
	}
}

