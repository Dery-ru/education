#include <string.h>
#include <stdio.h>

void	*ft_memcpy(char *dst, char *src, size_t size)
{
	size_t i;
	
	i = 0;
	while (i < size)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
int main (void)
{
	char src[10] = "1234567890";
	char dst[10] = "";
	unsigned int size = 6;
	printf("dst: %s\n", memcpy(dst, src, size));
	printf("dst2: %s\n", ft_memcpy(dst, src, size));
	return (0);
}
