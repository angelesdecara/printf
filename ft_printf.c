/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:18:48 by angrodri          #+#    #+#             */
/*   Updated: 2022/09/29 21:03:57 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	printtype(char type, va_list arg)
{
	/*
	 when adding va_arg() the program doesnt link
	 */
	if (type == '%')
		ft_putchar_fd('%', 1);
	if (type == 'd' || type == 'i')
		ft_putnbr_fd((int)va_arg(arg, int), 1);
	if (type == 's')
		ft_putstr_fd((char *)va_arg(arg, char *), 1);
}

int	ft_printf(char const *str, ...)
{
	va_list	toprint;
	size_t	i;

	va_start(toprint, str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '%')
		{
			write(1, &str[i], 1);
			i++;
		}
		if (str[i] == '%')
		{
			if (str[i + 1] == '%')
				printtype(str[i + 1], toprint);
				i = i + 2;
				i++;
		}
	/* printf("%d", printf("%.2s\n", (char *)va_arg(toprint, char *)));
	printf("%d", (int)va_arg(toprint, int));
	*/
	}
	va_end(toprint);
	return (i);
}

int	main(void)
{
	ft_printf("%s y %d\n", "abc", 3);
	ft_printf("%% y %d\n",  3);
}
