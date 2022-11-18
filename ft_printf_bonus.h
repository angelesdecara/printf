/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 14:30:12 by angrodri          #+#    #+#             */
/*   Updated: 2022/11/18 21:21:35 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stddef.h>

size_t	flen(char *s);
int		ft_putnbr_base(unsigned long int nbr, char *base);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
int		ft_atoi(const char *arg);
int		ft_printf_bonus(char const *str, ...);
char	*ft_itoa(int n);
int		ft_putptr(unsigned long int ptr);
int		ft_uint_print(unsigned int nbr);
int		ft_getflags(char *s);

#endif
