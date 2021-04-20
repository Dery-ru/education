#include <string.h>
#include <stdio.h>

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    int i;

    i = 0;
    while (str2[i] != '\0' && str1[i] != '\0' && i < (int)n)
    {
        if (*str1 == *str2)
            i++;
        if (i == (int)n && str1[i] != str2[i])
            break;
    }
    return(str1[i - 1] - str2[i - 1]);
}

int main()
{
    char src[15] = "0123456789";
    char src2[15] = "012345678z";
    int len = 7;
    printf("lib: %d\n", strncmp(src, src2, len));
    printf("ft: %d\n", ft_strncmp(src, src2, len));
    return 0;
}