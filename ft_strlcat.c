/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevin <kevin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:00:13 by klefranc          #+#    #+#             */
/*   Updated: 2023/11/19 11:12:52 by kevin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t dest_len = 0;

	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len++;
	if (size == 0 || dest_len == size)
		return dest_len + ft_strlcpy(dest, src, 0);
	
	size_t remaining = ft_strlcat(dest + dest_len, src, size - dest_len);

	return (dest_len + remaining);
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