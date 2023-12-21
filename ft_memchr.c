/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klefranc <klefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:53:17 by klefranc          #+#    #+#             */
/*   Updated: 2023/12/21 11:55:18 by klefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	chr;
	size_t			i;

	ptr = (unsigned char *)s;
	chr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*(ptr + i) == chr)
			return (ptr + i);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	#include <stdio.h>
// 	#include <string.h>

// 	printf("Original: %p\n", memchr("Bonjour", 'n', 5));
// 	printf("Result: %p\n", ft_memchr("Bonjour", 'n', 5));
// 	return (0);
// }