#include<stdio.h>
#include<stdlib.h>

int ft_iterative_factorial(int nb)
{
	int new_num;
	//nb = 2;
	if(nb <= 0)
		return 0;
	while(nb > 0)
	{
	nb--;
	new_num = nb * (nb- 1);
	}
	return 
}

/* int ft_iterative_factorial(int nb)
{
	if(nb <= 0)
		return 0;
	if(nb > 0)
	{
	ft_iterative_factorial(nb - 1)
	nb--;
	}
} */


int main ()
{
	int n = ft_iterative_factorial(5);
	printf("%d", n);
}
/* Create an iterated function
 that returns a number.
  This number is the result of a
factorial operation 階乗演算based on the number 
given as a parameter.
• If there’s an error,
 the function should return 0. */
