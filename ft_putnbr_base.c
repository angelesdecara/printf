/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:28:38 by angrodri          #+#    #+#             */
/*   Updated: 2022/10/28 17:52:29 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static size_t	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	return (len);
}

static int	testbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_putnbr_base(unsigned long long nbr, char *base)
{
	unsigned long long	len;
	unsigned long long	aux;
	int					c;

	len = ft_strlen(base);
	aux = nbr;
	c = 0;
	if (testbase(base) > 0)
	{
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
}
