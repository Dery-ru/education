#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t k;

    i = 0;
    while (dst[i])
        i++;
    j = 0;
    while (src[j] != '\0' && j < (size - 1))
    {
        dst[i + j] = src[j];
        j++;
    }
    dst[i + j] = '\0';
    k = 0;
    while (src[k])
    {
        k++;
    }
    return(k + size);
}

int main ()
{
    int buf = 3;
    const char src[40] = "first string second string";
    char dst[40] = "fucking ";
	strlcat(dst, src, buf);
    printf("bibl: %s\n", dst);
	ft_strlcat(dst, src, buf);
    printf("ft: %s\n", dst);
    return(0);
}