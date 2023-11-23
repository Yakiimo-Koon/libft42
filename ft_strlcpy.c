/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klefranc <klefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 08:33:19 by klefranc          #+#    #+#             */
/*   Updated: 2023/11/21 17:30:33 by klefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t
	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}

/* #include <stdio.h>

int main()
{
    char destination[4];
    const char *source = "Hello, World!";
    
    size_t length = ft_strlcpy(destination, source, sizeof(destination));
    
    printf("Chaîne copiée : %s\n", destination);
    printf("Longueur de la chaîne copiée : %zu\n", length);

    return 0;
} */