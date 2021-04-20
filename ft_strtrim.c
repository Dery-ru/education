#include <stdio.h>
#include "libft.h"

int		ft_check(char s1, char const *set)
{
	int i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	int		i;
	int		j;
	int		k;

	k = ft_strlen(s1);
	j = 0;
	i = 0;
	dst = (char *)malloc((k + 1) * sizeof(char));
	if (!dst)
		return (0);
	printf("k: %d\n", k);
	while (ft_check(s1[i], set) == 1)
		i++;
	while (ft_check(s1[k - 1], set) == 1)
		k--;
	printf("k2: %d\n", k);
	while (i < k)
	{
		dst[j] = s1[i];
		i++;
		j++;
	}
	
	return (dst);
}

int main()
{
	char s1[20] = "laldfunaldckanla";
	char s2[10] = "nald";
	printf("ft: %s\n", ft_strtrim(s1, s2));
	return(0);
}