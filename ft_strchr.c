#include <string.h>
#include <stdio.h>

char    *ft_strchr(const char *str, int ch)
{
    char    *s;

    s = (char *)str;
    while (*s != ch)
    {
        if (*s == '\0')
            return(0);
        s++;
    }
    return(s);
}
/*
int main()
{
    char src[10] = "";
    int ch = '6';
    printf("lib: %s\n", strchr(src, ch));
    printf("ft: %s\n", ft_strchr(src, ch));
}*/