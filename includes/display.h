/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 00:04:31 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/25 00:05:00 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_H
# define DISPLAY_H

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
char	*get_next_line(int fd);

#endif
