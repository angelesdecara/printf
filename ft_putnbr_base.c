/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:28:38 by angrodri          #+#    #+#             */
/*   Updated: 2022/09/19 19:48:14 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			len;
	long int	aux;

	len = ft_strlen(base);
	aux = nbr;
	if (aux < 0)
	{
		write(1, "-", 1);
		aux = (-1) * aux;
	}
	if (aux < len)
		write(1, &base[aux], 1);
	else
	{
		ft_putnbr_base(aux / len, base);
		ft_putnbr_base(aux % len, base);
	}
}
