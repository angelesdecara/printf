/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:38:59 by angrodri          #+#    #+#             */
/*   Updated: 2022/10/29 22:09:42 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"
int	main(void)
{
	long long int	i;
	long long int	*j;
	long long int k;
	long long int *kk;
	size_t ptr;
	int	l;

	i = LONG_MAX;
	j = &i;
	k = LONG_MIN;
	kk = &k;
	ptr = (size_t)j;

	l = -11;
	printf("%x\n",l);
	while(l++ <=0)
		printf("%x\n",l);


	ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% ", 'A', "42", 42, 42, 42, 42, 42, 'B', "-42", -42,-42,-42, -42, 42);
	printf("\n");
	printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% ", 'A', "42", 42, 42, 42, 42, 42, 'B', "-42", -42, -42, -42, -42, 42);
	printf("\n");
	printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% ", 'A', "42", 42, 42 ,42 , 42, 42);
	//ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);

	ft_printf("\n");
	printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	ft_printf("\n");
	ft_printf("\n");
	ft_printf("........\n");
	ft_printf("\n");
	i=ft_printf(" %p %p",j,kk);
	ft_printf(" %d",i);
	i=printf(" %p %p",j,kk);
	printf(" %lld",i);
}
