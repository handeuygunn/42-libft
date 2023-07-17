/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42istanbul <42istanbul.com.tr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:43:24 by 42istanbu         #+#    #+#             */
/*   Updated: 2023/07/12 13:16:41 by 42istanbu        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	i = 0;
	if (ft_strlen(s) == 0 || len == 0 || start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	p = (char *) malloc((len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	while (i < ft_strlen(s) && i < len && s[start + i])
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = 0;
	return (p);
}
