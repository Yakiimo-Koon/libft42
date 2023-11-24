/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klefranc <klefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:32:23 by klefranc          #+#    #+#             */
/*   Updated: 2023/11/24 15:27:25 by klefranc         ###   ########.fr       */
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

char			*ft_itoa(int n)
{
	char		*a;
	unsigned	un;
	size_t		len;

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
/* int main()
{
    int number = -12345;
    char* str = ft_itoa(number);

    printf("Entier : %d, Chaîne : %s\n", number, str);

    free(str);

    return 0;
} */