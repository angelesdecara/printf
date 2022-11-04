/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:38:59 by angrodri          #+#    #+#             */
/*   Updated: 2022/11/04 21:18:43 by angrodri         ###   ########.fr       */
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
	printf("%p\n",k);
	ft_printf("%p\n",k);
	printf("%x\n",l);
	while(l++ <=0)
	{
		printf("intrinsic %x\n",l);
		ft_printf("mine %x\n",l);
	}

}
