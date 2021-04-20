#include <string.h>
#include <stdio.h>

void *ft_memccpy(char *dst, char *src, int c, size_t size)
{
	int i;

	i = 0;
	while (i < (int)size)
	{
		dst[i] = src[i];
		if (src[i] == (char)c)
			break;
		i++;
	}
	return (dst);
}

int main (void)
{
	char dst[15] = "";
	char src[15] = "hala vandala";
	int c = 'd';
	size_t size = 9;
	memccpy(dst, src, c, size);
	printf("dst: %s\n", dst);
	printf("dst2: %s\n", ft_memccpy(dst, src, c, size));
	return (0);
}

