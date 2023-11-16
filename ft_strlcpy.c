/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klefranc <klefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 08:33:19 by klefranc          #+#    #+#             */
/*   Updated: 2023/11/16 09:09:43 by klefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    if (src[0] == '\0' || size == 0)
	{
        dest[0] = '\0';
        return 0;
    }
    dest[0] = src[0];

    size_t remaining = ft_strlcpy(dest + 1, src + 1, size - 1);

    return (1 + remaining);
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