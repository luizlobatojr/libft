#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
size_t  ft_strlen(const char *s);
void ft_bzero(void *s, size_t n);
void *ft_menset(void *b, int c, size_t len);
void *ft_memccpy(void *dst, const void *src, int c, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memset(void *b, int c, size_t len);
void *ft_memcpy(void *dst, const void *src, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strcpy(char *dst, const char *src);

#endif

