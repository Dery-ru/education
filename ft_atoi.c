#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
    unsigned int	num;
	int				i;
	int				np;

	np = 1;
	i = 0;
	num = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f' ||
			str[i] == '\r' || str[i] == '\n' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			np = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(np * num));
}
int main ()
{
    char str[100] = "    \t -020734оао6";
    printf("lib: %d\n", atoi(str));
    printf("ft: %d\n", ft_atoi(str));
    return (0);
}