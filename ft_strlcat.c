/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klefranc <klefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:00:13 by klefranc          #+#    #+#             */
/*   Updated: 2023/12/06 12:48:49 by klefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	j;
	size_t	dest_length;
	size_t	source_length;

	if (size == 0)
		return (0);
	j = 0;
	dest_length = ft_strlen(dest);
	source_length = ft_strlen(src);
	if (size <= dest_length)
		return (source_length + size);
	while (src[j] && size - 1 > dest_length + j)
	{
		dest[dest_length + j] = src[j];
		j++;
	}
	dest[dest_length + j] = '\0';
	return (dest_length + source_length);
}

/* #include <stdio.h>

int main()
{
    char destination[20] = "Hello, ";
    const char *source = "World!";
    
    size_t length = ft_strlcat(destination, source, sizeof(destination));
    
    printf("Chaîne concaténée : %s\n", destination);
    printf("Longueur de la chaîne concaténée : %zu\n", length);

    return 0;
} */