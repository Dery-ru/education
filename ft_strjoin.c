#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *dst;
	size_t i;

	dst = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 2) * sizeof(char));
	i = 0;
	if (!dst)
		return (0);
	while (*s1 != '\0')
		{
			dst[i] = *s1;
			i++;
			s1++;
		}
	printf("le: %zu\n", ft_strlen(s1));
	dst[i++] = ' ';
	while (*s2 != '\0')
		{
			dst[i] = *s2;
			i++;
			s2++;
		}
	return (dst);
}

int main()
{
	char s1[10] = "hala";
	char s2[10] = "vandala";
	printf("ft; %s\n", ft_strjoin(s1, s2));
	return(0);
}