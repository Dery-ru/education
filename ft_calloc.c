#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	char *ptr;

	if(num == 0 || size == 0)
	{
		num = 1;
		size = 1;
	}
	ptr = malloc (num * size);
	if (ptr)
		ft_bzero(ptr, num);
	return (ptr);
}

int main ()
{
	return(0);
}