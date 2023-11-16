/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klefranc <klefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 07:41:19 by klefranc          #+#    #+#             */
/*   Updated: 2023/11/16 08:44:38 by klefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	char *d = (char*)dest;
	const char *s = (const char*)src;

	while (size > 0)
	{
		*d = *s;
		d++;
		s++;
		size--;
	}
	return (dest);
}

/*  #include <stdio.h>
int main()
{
	const char src[] = "Hello, my memcpy!";
	char dest[20];

	ft_memcpy(dest, src, sizeof(src));
	dest[sizeof(src) - 1] = '\0';

	printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
	return 0;
} */