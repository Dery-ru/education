#include <stdio.h>
#include <ctype.h>

int     ft_isalpha(int character)
{
    if ((character >= 65 && character <= 90) || (character >= 97 && character <= 122))
        return (1);
    return (0);
}

int main()
{
    char x = 'X';
    printf("lib: %d\n", isalpha (x));
    printf("ft: %d\n", ft_isalpha (x));
    return 0;
}