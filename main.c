/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:38:59 by angrodri          #+#    #+#             */
/*   Updated: 2022/11/18 21:56:09 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <limits.h>
#include "ft_printf_bonus.h"
int	main(void)
{
	int	l;
	int* k;
	char* s;

	k = &l;
	l = 11;
	printf("%5d\n\n",l);


	printf("aaaa %p\n",k);
	printf("aaaa %-p\n",k);
	ft_printf_bonus("bbbb %p\n",k);
	//printf("%x\n",LONG_MAX);
	ft_printf_bonus("%x\n",LONG_MAX);
	while(l-- >=0)
	{
		printf("intrinsic %-5x\n",l);
		printf("intrinsic %5x\n",l);
		printf("%10d\n",l);
		printf("%010d\n",l);
		printf("%-10d\n",l);
	}
	s = "cosxs v0rixs %0dabc";
	l = 0;
	while(s[l])
	{
		if(*(s + l) == '%')
			printf("res of flags is = %d",ft_getflags((s + l)));
		l++;
	}
	printf("\n %s",strchr(s,'0'));
}
