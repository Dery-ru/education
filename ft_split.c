#include <stdio.h>
#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char **dst;
	int count;
	int i;
	int j;
	int k;

	k = 0;
	i = 0;
	j = 0;
	count = ft_strlen(s) - ft_strlen(ft_strchr(s, c));

	dst =  (char*) malloc ((ft_strlen(*s) + count) * sizeof (char));

	while (s[i] == '\0')
	{
		if (s[i] == c)
		{
			j++;
			
		}
		dst[j][i] = s[i];
	}
}