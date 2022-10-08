/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:18:48 by angrodri          #+#    #+#             */
/*   Updated: 2022/10/08 20:11:56 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	npercent(char const *str)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == '%')
				i++;
			else
			{
				n += 1;
			}
		}
		i++;
	}
	return (n);
}

int	printtype(char type, va_list arg)
{
	if (type == '%')
		ft_putchar_fd('%', 1);
	if (type == 'd' || type == 'i')
		ft_putnbr_fd(va_arg(arg, int), 1);
	if (type == 's')
		ft_putstr_fd(va_arg(arg, char *), 1);
	if (type == 'c')
		ft_putchar_fd(va_arg(arg, int), 1);
	if (type == 'p')
		ft_putptr((unsigned long long)va_arg(arg, unsigned long long));
	return (1);
}

int	ft_printf(char const *str, ...)
{
	va_list	toprint;
	size_t	i;
	size_t	n;

	n = npercent(str);
	va_start(toprint, str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '%')
			write(1, &str[i], 1);
		if (str[i] == '%')
		{
			printtype(str[i + 1], toprint);
			i++;
		}
		i++;
	/* printf("%d", printf("%.2s\n", (char *)va_arg(toprint, char *)));
	printf("%d", (int)va_arg(toprint, int));
	*/
	}
	va_end(toprint);
	return (i);
}
