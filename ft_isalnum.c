#include <stdio.h>
#include <ctype.h>

int     ft_isalnum(int character)
{
    if ((character >= 65 && character <= 90) || (character >= 97 && character <= 122) || 
    (character >= '0' && character <= '9'))
        return (1);
    return (0);
}

int main()
{
    char x = 'X';
    printf("lib: %d\n", isalnum (x));
    printf("ft: %d\n", ft_isalnum (x));
    return 0;
}