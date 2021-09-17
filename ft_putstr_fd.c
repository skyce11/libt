#include <stdio.h>
#include <unistd.h>


int ft_strlen(char *s)
{
	int i;

	i = 0;

	while(s[i] != '\0')
	{
		i++;
	}
	return (i);
}

void ft_putstr_fd(char *s, int fd)
{
	int i;

	i = -1;

	while(s && s[i++])
			write(fd, &s[i], 1);
}


int main()
{
	int fd = 0;
	char *s = "Hola buenas tardes";

	ft_putstr_fd(s, fd);
	printf("%d\n", fd);
	return (0);
}
