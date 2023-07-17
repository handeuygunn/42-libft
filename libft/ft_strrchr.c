/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42istanbul <42istanbul.com.tr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:04:55 by 42istanbu         #+#    #+#             */
/*   Updated: 2023/07/04 17:31:32 by 42istanbu        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	if ((char) c == '\0')
		return ((char *)(s + i + 1));
	while (i >= 0)
	{
		if (s [i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
