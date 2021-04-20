#include <stdio.h>
#include <ctype.h>

int ft_isascii(int character)
{
    if (character >= 0 && character <= 0x7f)
        return (1);
    return (0);
}

int main()
{
    char x = 0x8f;
    printf("lib: %d\n", isascii (x));
    printf("ft: %d\n", ft_isascii (x));
    return 0;
}
