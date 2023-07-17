/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huygun <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:14:13 by huygun            #+#    #+#             */
/*   Updated: 2023/07/12 11:51:21 by 42istanbu        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static int	ft_control(char s, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	while (s1[i] && ft_control(s1[i], set))
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_control(s1[j - 1], set))
		j--;
	p = (char *) malloc((j - i + 1) * sizeof(char));
	if (!p)
		return (NULL);
	while (s1[i] && i < j)
	{
		p[k] = s1[i];
		k++;
		i++;
	}
	p[k] = '\0';
	return (p);
}
