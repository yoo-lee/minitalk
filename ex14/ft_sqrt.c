#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 0;
	while (sqrt <= nb / 2)
	{
		if ((sqrt * sqrt) == nb)
			return (nb);
		else
			sqrt++;
	}
	return (0);
}
