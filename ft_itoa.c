/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klefranc <klefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:53:14 by klefranc          #+#    #+#             */
/*   Updated: 2023/12/21 11:57:42 by klefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	n_len(int n)
{
	size_t	len;

	len = 0;
	if (n == -2147483648)
		n++;
	if (n <= 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*a;
	unsigned int	un;
	size_t			len;

	len = n_len(n);
	if (n < 0)
		un = (unsigned)(n * -1);
	else
		un = (unsigned)n;
	a = (char *)malloc(sizeof(char) * (len + 1));
	if (a != NULL)
	{
		a[len--] = '\0';
		if (n < 0)
			a[0] = '-';
		else if (n == 0)
			a[0] = '0';
		while (un > 0)
		{
			a[len--] = (char)(un % 10 + '0');
			un /= 10;
		}
	}
	return (a);
}

/*  int	main(void)
 {
 	#include <stdio.h>

 	printf("Result: %s\n", ft_itoa(-2147483648));
 	return (0);
 } */