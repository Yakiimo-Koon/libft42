/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klefranc <klefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:20:36 by klefranc          #+#    #+#             */
/*   Updated: 2023/11/16 09:38:21 by klefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int SearchedChar, size_t size)
{
	const unsigned char *p = memoryBlock;

	while (size > 0)
	{
		if (*p == (unsigned char)SearchedChar)
		{
			return ((void*)p);
		}
		p++;
		size--;
	}
	return (NULL);
}

int main() {
    // Example usage of ft_memchr
    const char* str = "Hello, World!";
    char target = 'W';

    // Search for 'W' in the string
    void* result = ft_memchr(str, target, 13);

    // Check if the character was found
    if (result != NULL) {
        printf("Character '%c' found at index %zu\n", target, (size_t)((char*)result - str));
    } else {
        printf("Character '%c' not found\n", target);
    }

    return 0;
}