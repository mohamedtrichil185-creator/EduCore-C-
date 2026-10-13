#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int number);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putnbr_fd(int number, int fd);
int	ft_atoi(char *str);
int	is_alpha(char c);
int	is_uppercase(char c);
int	is_lowercase(char c);
int	is_number(char c);
int	is_alphanumber(char c);
int	str_is_alpha(char *str);
int	str_is_number(char *str);
int	str_is_uppercase(char *str);
int	str_is_lowercase(char *str);
int	str_is_alphanumber(char *str);
int	is_sep(char c, char *sep);
int	count_word(char *str, char *sep);
int	count_char(char *str, char *sep);
char	*cpy_word(char *arr, char **str, char *charset);
char	*ft_strdup(char *src);
char	to_uppercase(char c);
char	to_lowercase(char c);
char	*ft_strcapitalize(char *str);
int	ft_strlen(char *Str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strcat(char *dest, char *src);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
char	**ft_split(char *str, char *charset);
int	read_positive_number(char *message);
char	*read_string(char *message);
#endif
