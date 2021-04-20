#include <string.h>
#include <stdio.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while (i <= (int)len)
    {
        while (big[i] != little[j])
            i++;
        if (i >= (int)len)
            break;
        while (big[i] == little[j] && little[j] != '\0')
        {
            i++;
            j++;
        }
        return((char *)&big[i - j]);
    }
    return (NULL);
}
int main()
{
    char src[15] = "0123456789";
    char src2[5] = "4";
    int len = 4;
    printf("lib: %s\n", strnstr(src, src2, len));
    printf("ft: %s\n", ft_strnstr(src, src2, len));
    return 0;
}