#include <stdio.h>
#include <string.h>

ft_putchar(char s)
{
	write(1, &s, 1);
}

int main (int argc, char *argv[])
{
	unsigned int	i;
	i = 1;
	while(i < argc)
	{
		while(*argv[i])
		{
		ft_putchar(*argv[i]++);
		}
		ft_putchar('\n');
		i++;
	}
}