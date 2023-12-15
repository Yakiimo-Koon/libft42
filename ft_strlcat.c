/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klefranc <klefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:00:13 by klefranc          #+#    #+#             */
/*   Updated: 2023/12/15 11:51:32 by klefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	if ((dest == NULL || src == NULL) && !size)
		return (0);
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (size < dest_len + 1)
		return (size + src_len);
	else if (size > dest_len + 1)
	{
		while (src[i] && (dest_len + i) < (size - 1))
		{
			dest[dest_len + i] = src[i];
			i++;
		}
	}
	dest[dest_len + i] = 0;
	return (dest_len + src_len);
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