#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>

int		ft_atoi(const char *str);
void	ft_bzero(void *src, size_t len);
void	*ft_calloc(size_t num, size_t size);
int		ft_isalnum(int character);
int		ft_isalpha(int character);
int		ft_isascii(int character);
int		ft_isdigit(int character);
int		ft_isprint(int character);
void	*ft_memccpy(char *dst, char *src, int c, size_t size);
void	*ft_memchr(const void *src, int c, size_t n);
int		ft_memcmp(const void *src1, const void *src2, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *src, int c, size_t len);
char	*ft_strchr(const char *str, int ch);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *str, int ch);
int		ft_tolower(int character);
int		ft_toupper(int character);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif