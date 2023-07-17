/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42istanbul <42istanbul.com.tr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:14:16 by 42istanbu         #+#    #+#             */
/*   Updated: 2023/07/05 12:56:34 by 42istanbu        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*c;
	char	*d;

	i = 0;
	c = (char *)s1;
	d = (char *)s2;
	while (i < n)
	{
		if (c[i] != d[i])
			return ((unsigned char)c[i] - (unsigned char)d[i]);
		i++;
	}
	return (0);
}
