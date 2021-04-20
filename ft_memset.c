#include "libft.h"

void	*ft_memset(void *src, int c, size_t len)
{
	char	*p;

	p = (char *)src;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (src);
}

/*int		main(void)
{
	char src[15] = "01234567";
	int  c = '5';
	unsigned int len = 2;
	memset (src, c, len);
	printf ("src: %s\n", src);
	ft_memset(src, c, len);
	printf ("src2: %s\n", src);
	return (0);
}*/