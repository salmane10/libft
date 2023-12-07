#ifndef LIBFT_H
#define LIBFT_H

# include <stddef.h> /* size_t */
# include <stdint.h> /* SIZE_MAX */
# include <stdlib.h> /* malloc */
# include <unistd.h> /* write */

int isalpha(int c);
int isdigit(int c);
int isalnum(int c);
int isascii(int c);
int isprint(int c);
size_t  strlen(const char *s);
void    *memset(void *s, int c, size_t n);
void    bzero(void *s, size_t n);
void    *memcpy(void *dest, const void *src, size_t n);
void    *memmove(void *dest, const void *stc, size_t n);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
int toupper(int c);
int tolower(int c);
char    *strchr(const char *s, int c);
char    *strrcher(const char *s, int c);
int strncmp(const char *s1, const char *s2, size_t n);
void    *memchr(const void *s, int c, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
int atoi(const char *str);
void    *calloc(size_t count, size_t size);
char    *ft_strdup(const char *s);

  /* Additional functions */

char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char    **ft_split(char const *s, char c);
char    *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int, char*));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);

#endif
