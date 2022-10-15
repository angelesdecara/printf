/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:38:59 by angrodri          #+#    #+#             */
/*   Updated: 2022/10/15 20:18:05 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "printf.h"
int	main(void)
{
	int	i;
	int	*j;

	i = 3;
	i /= 2;
	printf("i/=2 =%d\n",i);
	j = &i;
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
