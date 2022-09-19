/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:28:38 by angrodri          #+#    #+#             */
/*   Updated: 2022/09/12 18:00:36 by angrodri         ###   ########.fr       */
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
	if (nbr == -2147483648)
	{
		aux = 2147483648 / (long int) len; 
		write(1, "-", 1);
		write(1, &aux, 1);
		aux = 2147483648 / (long int) len;
		nbr = aux;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = (-1) * nbr;
	}
	if (nbr >= len)
	{
		ft_putnbr_base(nbr / len, base);
		nbr = nbr % len;
	}
	if (nbr < len)
		write(1, &base[nbr], 1);
}

int	main(void)
{
	char	base[] = "abcd";
	int		i;
	int		len;

	len = ft_strlen(base);
	printf("base %d\n", len);
	i = 0;
	while (i < 10)
	{
		//if(i<4) write(1, &base[i], 1);
		ft_putnbr_base(i,base);
		printf("\n");
		i++;
	}
	ft_putnbr_base(2147483647, base);
	ft_putnbr_base(-2147483648, base);
}
