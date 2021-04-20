#include <stdio.h>
#include <ctype.h>

int		ft_toupper(int character)
{
	if (character >= 97 && character <= 122)
		return (character - 32);
	else if (character >= 65 && character <= 90)
        return (character);
	else
		return (character);
}

int main()
{
    char x = '*';
    printf("lib: %c\n", toupper (x));
    printf("ft: %c\n", ft_toupper (x));
    return 0;
}