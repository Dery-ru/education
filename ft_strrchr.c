/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoke <rhoke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:12:22 by rhoke             #+#    #+#             */
/*   Updated: 2021/04/19 16:25:10 by rhoke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char    *ft_strrchr(const char *str, int ch)
{
    char    *dst;
    int     i;

    i = 0;
    dst = (char *)str;
    while(dst[i] != '\0')
        i++;
    while (dst[i] != ch)
    {
        if (i == 0)
            return (0);
        i--;
    }
    return (&dst[i]);
}

int main()
{
    char src[15] = "1234556000060";
    int ch = '5';
    printf("lib: %s\n", strrchr(src, ch));
    printf("ft: %s\n", ft_strrchr(src, ch));
}