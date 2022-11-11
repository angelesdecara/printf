/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:38:59 by angrodri          #+#    #+#             */
/*   Updated: 2022/11/11 20:03:26 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"
int	main(void)
{
	int	l;
	int* k;

	k = &l;
	l = 11;
	printf("aaaa %p\n",k);
	printf("aaaa %-p\n",k);
	ft_printf("bbbb %p\n",k);
	printf("%x\n",LONG_MAX);
	ft_printf("%x\n",LONG_MAX);
	while(l-- >=0)
	{
		printf("intrinsic %-5x\n",l);
		printf("intrinsic %5x\n",l);
		ft_printf("mine %x\n",l);
	}

}
