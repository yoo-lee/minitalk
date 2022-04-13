#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	t;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
//?? why the return value to be 1 0 -1
/* int main(void)
{
    char str[] = "ABC";
    char str1[] = "ABC";
    char str2[] = "ABD";
    char str3[] = "B";
    char str4[] = "AAAA";

    printf("ft_strcmp(%s, %s) = %d\n", str, str1, ft_strcmp(str, str1));
    printf("ft_strcmp(%s, %s) = %d\n", str, str2, ft_strcmp(str, str2));
    printf("ft_strcmp(%s, %s) = %d\n", str, str3, ft_strcmp(str, str3));
    printf("ft_strcmp(%s, %s) = %d\n", str, str4, ft_strcmp(str, str4));

    return 0;
} */

//s1 > s2 で正の値、
//s1 < s2 で負の値、s1 = s2で 0 を返す。
//この大小関係は一般に文字コード順による。