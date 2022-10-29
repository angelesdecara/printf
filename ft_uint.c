/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:04:59 by angrodri          #+#    #+#             */
/*   Updated: 2022/10/29 21:11:13 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uint_print(unsigned int nbr)
{
	char	a;
	int		c;

	c = 0;
	if (nbr >= 10)
	{
		c += ft_uint_print(nbr / 10);
		nbr = nbr % 10;
	}
	if (nbr < 10)
	{
		a = (int)nbr + '0';
		write(1, &a, 1);
		c++;
	}
	return (c);
}
