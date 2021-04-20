#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	unsigned char *ptr;
	const unsigned char *ptr2;

	ptr = (unsigned char*)dst;
	ptr2 = (unsigned char*)src;
	i = 0;
	if (ptr2 < ptr)
		while (++i < len)
			ptr[len-1] = ptr2[len -1];
	else
		while (len-- > 0)
			*(ptr++) = *(ptr2++);
	return (dst);
}

int main(void)
{
	unsigned char src[10] = "1234567890";
	printf("src old: %s\n", src);
	ft_memmove (&src[2], &src[5], 5);
	printf("src new: %s\n", src);
	return (0);
}