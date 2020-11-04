/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrissan <akrissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 14:43:19 by akrissan          #+#    #+#             */
/*   Updated: 2020/06/17 14:43:24 by akrissan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

int					ft_putchar(char c);
int				ft_strlen(const char *str);
int					ft_atoi(const char *str);
void				*ft_memset(void *str, int c, size_t n);
void				ft_bzero(void *str, size_t n);
void				*ft_memcpy(void *dests, const void *srcs, size_t size);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_strchr(const char *string, int searchedchar);
char				*ft_strrchr(const char *string, int searchedchar);
int					ft_strncmp(const char *first, const char *scd, size_t lgth);
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strnstr(const char *dest, const char *src, size_t len);
void				*ft_calloc(size_t nmemb, size_t size);
char				*ft_strdup(const char *source);
char				*ft_substr(char const *s, int start, int len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);

/*-------------------------------------------------------------*/
int				ft_putstr_n(char *s, int n);
char				*ft_uitoa(unsigned int n);
char				*ft_itoa_base(unsigned int n, const char *base);
char				*ft_lltoa_base(long long n, const char *base);
int				use_in_set(char c, char *set);
char				*ft_strndup(const char *source, int size);
int				ft_putstr(char *str);
char				*ft_strncpy(char *dest, char *src, unsigned int n);
char 				*ft_strcpy(char *dest, char *src);
#endif
