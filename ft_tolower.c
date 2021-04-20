#include <stdio.h>
#include <ctype.h>

int		ft_tolower(int character)
{
	if (character >= 65 && character <= 90)
        return (character + 32);
	else
		return (character);
}

int main()
{
    char x = 'L';
    printf("lib: %c\n", tolower (x));
    printf("ft: %c\n", ft_tolower (x));
    return 0;
}