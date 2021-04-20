#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *src1,const void *src2, size_t n)
{
    unsigned const char *s1;
    unsigned const char *s2;

    s1 = (unsigned const char *)src1;
    s2 = (unsigned const char *)src2;
    if (s1 == 0 || s2== 0)
        return (0);
    while (n)
    {
        if(*s1 != *s2)
            return (*s1 - *s2);
        s1++;
        s2++;
        n--;
    }
    return (0);
}

int main ()
{
    char t1[10] = "0123456789";
    char t2[10] = "0123453789";
    printf("bibl fn %d\n", memcmp(t1, t2, 7));
    printf("ft fn %d\n", ft_memcmp (t1, t2, 7));
    return (0);
}