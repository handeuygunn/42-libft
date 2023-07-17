/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42istanbul <42istanbul.com.tr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:44:24 by 42istanbu         #+#    #+#             */
/*   Updated: 2023/07/04 14:30:35 by 42istanbu        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*des;
	char	*sr;

	i = 0;
	if (dest == src)
		return (NULL);
	des = (char *) dest;
	sr = (char *) src;
	while (i < n)
	{
		des [i] = sr [i];
		i++;
	}
	return (dest);
}
