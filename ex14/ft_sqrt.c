#include <stdio.h>

int	ft_sqrt(int nb);
{
	unsigned int i;
	
	i = 1;
	while (nb > i*i)
		i++;
	if(nb = i*i)
		return (i);
	else
	return 0;
}