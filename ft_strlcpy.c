#include <stdio.h>
#include <string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;

    j = 0;
    while (src[j])
        j++;
    i = 0;
    while(src[i] && i < (size - 1))
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return(j);
}

int main ()
{
    int buf = 13;
    const char src[40] = "first string \0 second string";
    char dst[40] = "fucking ";
    printf("bibl: %lu\n", strlcpy(dst, src, buf));
    printf("ft: %lu\n", ft_strlcpy(dst, src, buf));
    return(0);
}