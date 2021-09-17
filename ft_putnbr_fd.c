#include <stdio.h>
#include <unistd.h>


void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void ft_putnbr_fd(int nb, int fd)
{
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		nb = nb % 10 ;
	}
	if (nb < 10)
	{
		ft_putchar_fd(nb + 48, fd);
	}
}

int main()
{
	int fd = 0;
	int i = 0;
	ft_putnbr_fd(i, fd);
	printf("%d\n", fd);
}
