/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42istanbul <42istanbul.com.tr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:33:35 by 42istanbu         #+#    #+#             */
/*   Updated: 2023/07/04 17:58:59 by 42istanbu        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((s1 [i] || s2 [i]) != '\0'))
	{
		if (s1 [i] != s2 [i])
			return (((unsigned char)s1 [i]) - ((unsigned char)s2 [i]));
		i++;
	}
	return (0);
}
