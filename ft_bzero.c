#include <strings.h>
#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *src, size_t len)
{
	ft_memset(src, 0, len);
}

int main(void)
{
	unsigned int len = 3;
	char src[15] = "0123456789";
	//bzero(src, len);
	printf("src: %s\n", bzero(src, len));
	ft_bzero(src, len);
	printf("src2: %s\n", src);
	return (0);
}



