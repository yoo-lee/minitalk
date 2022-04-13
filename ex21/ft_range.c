#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	char	*array;

	if (min >= max)
		return (0);
	array = malloc(sizeof(int *) * (max - min));
	if (!array)
		return (0);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
}

/*  int     absolute_value(int n)
{
    if (n < 0)
        return (-n);
    return (n);
}
 
 int      main(void)
 {
  int start = -1;
  int end = 2;
 
  int *arr = ft_range(start, end);
 
  int i = 0;
  while (i < 1 + absolute_value(end - start))
  {
      printf("%d, ", arr[i]);
      ++i;
  }
  printf("\n");
 }
  */
