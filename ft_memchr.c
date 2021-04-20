#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *src, int c, size_t n)
{
    size_t i;

    i = 0;
    while (i <= n)
    {
        if (((char*)src)[i] == c)
            return(((char*)src + i));
        i++;
    }
    return (0);

}
int main ()
{
    unsigned char src[10] = "1235364890";
    char *dst;
    printf("src old: %s\n", src);
    dst = ft_memchr(src, '4', 10);
    if (dst != NULL)
        dst[0] = '!';
    printf("src new: %s\n", src);
    return (0);
}