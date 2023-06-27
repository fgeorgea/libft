/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_lib.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 00:07:07 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/27 01:34:41 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_LIB_H
# define STRING_LIB_H

size_t	ft_strlen(const char *s);
int		ft_strcspn(const char *str, const char *reject);
int		ft_strspn(const char *str, const char *charset);
char	*ft_strrev(const char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_strndup(char *src, int n);
char	*ft_strdup_reject(const char *src, const char *reject);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	**ft_split_charset(char const *s, char *charset);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strcmp_strict(const char *s1, const char *s2);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str, int *n);
char	*ft_strcpy(char	*dest, char	*src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strtok(char *str, const char *token);
char	*ft_strpbrk(const char *str, const char *accept);
char	*ft_strerror(int errnum);
void	ft_perror(const char *message);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strerror6(int errnum);
char	*ft_strerror7(int errnum);
char	*ft_strerror8(int errnum);
char	*ft_strerror9(int errnum);
char	*ft_strerror10(int errnum);
char	*ft_strerror11(int errnum);
char	*ft_strerror12(int errnum);
char	*ft_strstr(const char *haystack, const char *needle);
char	*str_replace(const char *str, const char *find, const char *replace);
char	*ft_arrayjoin(char **strs, char *sep);
char	*ft_strinsert(const char *str, const char *substr, int pos);

#endif
