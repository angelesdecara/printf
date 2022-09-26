/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:18:48 by angrodri          #+#    #+#             */
/*   Updated: 2022/09/26 19:53:26 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(char const *str, ...)
{
	va_list	toprint;
	size_t	i;

	va_start(toprint, str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '%' && str[i + 1] != '%')
		{
			write(1, &str[i], 1);
			i++;
		}
		if (str[i] == '%' && str[i + 1] == '%')
		{
			write(1, "%", 1);
			i = i + 2;
		}
		if (str[i] == '%' && str[i + 1] != '%')
		{
		}
	/* printf("%d", printf("%.2s\n", (char *)va_arg(toprint, char *)));
	printf("%d", (int)va_arg(toprint, int));
	*/
	}
	return (i);
}

int	main(void)
{
	ft_printf("%s y %d\n", "abc", 3);
}
