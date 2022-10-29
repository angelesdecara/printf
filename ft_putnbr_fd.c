/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:12:02 by angrodri          #+#    #+#             */
/*   Updated: 2022/10/29 19:44:52 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	vlarge(int *nbr)
{
	write(1, "-2", 2);
	*nbr = 147483648;
	return (2);
}

int	ft_putnbr(int n)
{
	char		a;
	int			c;

	c = 0;
	if (n == -2147483648)
		c = vlarge(&n);
	if (n < 0)
	{
		write(1, "-", 1);
		n = (-1) * n;
		c = 1;
	}
	if (n >= 10)
	{
		c += ft_putnbr(n / 10);
		n = n % 10;
	}
	if (n < 10)
	{
		a = n + '0';
		write(1, &a, 1);
		c++;
	}
	return (c);
}
