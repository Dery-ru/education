#include <stdio.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;
	int i;
	int j;
	
	i = 0;
	while (s[i])
		i++;
	sub = (char*)malloc((i + 1) * sizeof(*s));
	if (!sub)
		return (0);
	j = 0;
	while(j < (int)len)
		{
			sub[j] = s[j + (int)start];
			j++;
		}
	return (sub);
}

int main()
{
	char src[20] = "01234567890123456789";
	unsigned int st = 3;
	size_t le = 5;
	printf("ft: %s\n", ft_substr(src, st, le));
	return (0);
}