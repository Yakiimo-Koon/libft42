/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klefranc <klefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 07:41:19 by klefranc          #+#    #+#             */
/*   Updated: 2023/12/15 10:11:24 by klefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
		*(unsigned char *)(dst + i++) = *(unsigned char *)(src++);
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