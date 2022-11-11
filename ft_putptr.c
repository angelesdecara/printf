/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:37:25 by angrodri          #+#    #+#             */
/*   Updated: 2022/11/11 13:48:49 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long int ptr)
{
	int	n;

	write(1, "0x", 2);
	n = 2 + ft_putnbr_base((uintptr_t)ptr, "0123456789abcdef");
	return (n);
}
