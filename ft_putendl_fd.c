#include <stdio.h>
#include <unistd.h>


void ft_putendl_fd(char *s, int fd)
{
	int i;
	char a;

	a = '\n';
	i = -1;

	while(s && s[i++])
	{
		write(fd, &s[i], 1);
	}
	write(fd, &a, 1);
}

int main()
{
	int fd = 0;
	char *s = "Hola buenas tardes";
	ft_putendl_fd(s, fd);
	printf("%d\n", fd);
}
