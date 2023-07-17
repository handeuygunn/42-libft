/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42istanbul <42istanbul.com.tr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:11:27 by 42istanbu         #+#    #+#             */
/*   Updated: 2023/07/12 13:28:35 by 42istanbu        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_intlen(long n)
{
	int	length;

	length = 0;
	if (n < 0)
		n = n * -1;
	while (n > 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

static char	*ft_str(char *p, long n, long i)
{
	long	number;
	char	*x;
	long	reminder;

	x = p;
	if (n < 0)
		number = -n;
	if (n > 0)
		number = n;
	x[i] = '\0';
	i--;
	while (number > 0)
	{
		reminder = number % 10;
		number = number / 10;
		x[i--] = reminder + '0';
	}
	if (n < 0)
		x[0] = '-';
	return (x);
}

char	*ft_itoa(int n)
{
	size_t	length;
	size_t	i;
	char	*p;

	if (n == 0)
		return (p = ft_strdup("0"));
	if (n < 0)
		length = ft_intlen(n) + 2;
	if (n > 0)
		length = ft_intlen(n) + 1;
	i = length - 1;
	p = malloc(length * sizeof(char));
	if (!p)
		return (NULL);
	p = ft_str(p, n, i);
	return (p);
}
