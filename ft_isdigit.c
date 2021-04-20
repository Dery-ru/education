#include <stdio.h>
#include <ctype.h>

int     ft_isdigit(int character)
{
    if (character >= '0' && character <= '9')
        return (1);
    return (0);
}

int main()
{
    char x = '9';
    printf("lib: %d\n", isdigit (x));
    printf("ft: %d\n", ft_isdigit (x));
    return 0;
}