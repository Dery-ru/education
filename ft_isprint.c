#include <stdio.h>
#include <ctype.h>

int ft_isprint(int character)
{
    if (character >= 0x20 && character <= 0x7e)
        return (1);
    return (0);
}

int main()
{
    char x = 6;
    printf("lib: %d\n", isprint (x));
    printf("ft: %d\n", ft_isprint (x));
    return 0;
}