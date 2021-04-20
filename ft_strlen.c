#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return(i);
}
/*
int  main()
{
    const char src[10] = "0123456789";
    printf("bibl: %lu\n", strlen(src));
    printf("ft: %lu\n", ft_strlen(src));
    return(0);
}*/