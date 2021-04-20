#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strdup(const char *str)
{
	char	*dst;
	int		count;
	int		i;

	count = 0;
	while (str[count])
		count++;
	dst = (char *)malloc((count + 1) * sizeof(*str));
	if (!dst)
		return (0);
	i = 0;
	while (i < count)
	{
		dst[i] = str[i];
		i++;
	}
	return (dst);
}

int	main()
{
	char str[10] = "0123456789";
	printf("ft: %s\n", ft_strdup(str));
	printf("lib: %s\n", strdup(str));
	return (0);
}