/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:38:59 by angrodri          #+#    #+#             */
/*   Updated: 2022/10/28 17:39:07 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "printf.h"
int	main(void)
{
	int	i;
	int	*j;
	size_t ptr;

	i = 3;
	i /= 2;
	printf("i/=2 =%d\n",i);
	j = &i;
	ptr = (size_t)j;
	ft_putnbr_base(ptr, "0123456789abcdef");
	printf("\n %zu\n",ptr);
	printf("\n %p \n",j);

	printf("%p\n", j );
	ft_printf("%s y %d + %s\n", "abc",i, "123");
	ft_printf("\n");
	ft_printf("%% y %d\n",  3);
	ft_printf("j = %p\n", j);
	ft_printf("unsigned %u\n",0);
	ft_printf("unsigned %u\n",4294967295);
	//printf("unsigned %u\n",4294967295);
	//printf("unsigned int longest is %u\n",(unsigned int)UINT_MAX);
}
