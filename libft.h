/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:09:01 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/23 18:37:59 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdarg.h>
# include <math.h>

# define PI 3.141592653589793
# define PRECISION 10

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif
# if BUFFER_SIZE > 10000
#  undef BUFFER_SIZE
#  define BUFFER_SIZE 10000
# elif BUFFER_SIZE < 1
#  undef BUFFER_SIZE
#  define BUFFER_SIZE 10000
# endif

typedef struct s_list
{
	struct s_list	*next;
	void			*content;
	int				nbr;
}		t_list;

typedef struct s_char
{
	struct s_char	*next;
	char			c;
}		t_char;

typedef struct s_generic
{
	struct s_generic	*next;
}		t_generic;

// STRING
size_t	ft_strlen(const char *s);
int		ft_strcspn(const char *str, const char *reject);
int		ft_strspn(const char *str, const char *charset);
char	*ft_strrev(const char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_strdup_reject(const char *src, const char *reject);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	**ft_split_charset(char const *s, char *charset);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str, int *n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_strcmp_strict(const char *s1, const char *s2);
char	*ft_strtok(char *str, const char *token);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strpbrk(const char *str, const char *accept);

// MEMORY
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	ft_free(void **ptr);
void	ft_var_free(int len, ...);
void	*ft_realloc(void *ptr, size_t size);

// CHAR
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_ispunct(int c);
int		ft_isspace(int c);
int		ft_isxdigit(int c);
int		ft_iscntrl(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

// MATH
double	ft_fabs(double nbr);
int		ft_abs(int nbr);
double	ft_ceil(double nbr);
double	ft_floor(double nbr);
int		ft_pow(int nbr, int power);
int		ft_sqrt(int nb);
int		ft_isprime(int nb);
int		ft_factorial(int nb);
size_t	ft_nbrlen(long int nb);
float	ft_rad_to_deg(float radian);
float	ft_deg_to_rad(float degrees);
double	ft_sine(double opposite, double hypotenuse, double *angle);

// DISPLAY
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putendl(char *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
int		ft_printf(int fd, const char *str, ...);
int		ft_printchar(int fd, char c);
int		ft_printstr(int fd, char *str);
int		ft_printnbr(int fd, long int nb);
void	ft_printhex(int fd, unsigned int nbr, char *base, int *len);
int		ft_printptr(int fd, unsigned long int nb);

// LINKED_LIST
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(void *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

// GNL
char	*get_next_line(int fd);

// ARRAY
size_t	ft_arraylen(void **array);
void	ft_array_rev(void **array);
void	**ft_array_add(void **src, void *new, int pos);
void	**ft_array_del(void **src, int pos);
void	**ft_array_replace(void **src, void *new, int pos);
void	*ft_array_get_value(void **array, int pos);
char	**ft_arraydup(char **src);

// VARIADICS
int		ft_close(int size, ...);

#endif
