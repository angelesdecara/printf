/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getflags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:35:19 by angrodri          #+#    #+#             */
/*   Updated: 2022/11/18 21:58:45 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static char	*ft_strchr(const char *s, int c)
{
	while (*s !=(char)c)
		if (!(*s++))
			return (0);
	return ((char *)s);
}

int	ft_getflags(char *s)
{
	char const	*set;

	set = "-0.";
	if (flen(s) > 0 && ft_strchr(set,*(s + 1)) != '\0')
		return(1);
	else
		return (0);
}
