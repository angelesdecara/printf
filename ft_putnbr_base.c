/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:28:38 by angrodri          #+#    #+#             */
/*   Updated: 2022/09/19 19:43:14 by angrodri         ###   ########.fr       */
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

int	main(void)
{
	char	base[] = "abcdefghij";
	int		i;
	int		len;

	len = ft_strlen(base);
	printf("base %d\n", len);
	i = -10;
	while (i < 10)
	{
		//if(i<4) write(1, &base[i], 1);
		ft_putnbr_base(i,base);
		printf("\n");
		i++;
	}
	ft_putnbr_base(2147483647, base);
	printf("\n");
	ft_putnbr_base(-2147483648, base);
}
