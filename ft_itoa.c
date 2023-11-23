/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klefranc <klefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:32:23 by klefranc          #+#    #+#             */
/*   Updated: 2023/11/23 14:02:11 by klefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		temp;
	int		size;
	int		isnegative;
	char	*result;

	isnegative = 0;
	temp = n;
	size = 0;
	while (temp != 0)
	{
		temp /= 10;
		size++;
	}
	if (n == 0)
		size = 1;
	if (n < 0)
	{
		isnegative = 1;
		size++;
		n = -n;
	}
	result = (char *)malloc((size + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[size] = '\0';
	while (size > isnegative)
	{
		size--;
		result[size] = (n % 10) + '0';
		n /= 10;
	}
	if (isnegative)
		result[0] = '-';
	return (result);
}

/* int main()
{
    int number = -12345;
    char* str = itoa(number);

    printf("Entier : %d, Chaîne : %s\n", number, str);

    free(str);

    return 0;
} */