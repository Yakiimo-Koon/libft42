/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klefranc <klefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 07:41:19 by klefranc          #+#    #+#             */
/*   Updated: 2023/11/23 13:34:25 by klefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	ptr = (unsigned char*)dst;
	ptr2 = (unsigned char*)src;
	while (n-- > 0)
		*(ptr++) = *(ptr2++);
	return (dst);
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