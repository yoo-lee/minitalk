
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char  num;

	num = '0';
	while (num <= '9')
	{
		ft_putchar(num);
		num++;
	}
}
//why isnt possible without "" just only number?
/* 
//writeの第二引数は文字列しか渡せないので、
int型の値を出力すると、それに対応したASCII文字がNULL文字を検出するまで出力されてしまうので、
int型の数値を文字列に変換してから出力します。
int main()
{
	ft_print_numbers();
	return 0;
} */
