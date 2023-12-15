/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klefranc <klefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:33:00 by klefranc          #+#    #+#             */
/*   Updated: 2023/12/15 10:11:58 by klefranc         ###   ########.fr       */
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

/* void	*ft_memchr(const void *memoryBlock, int SearchedChar, size_t size)
{
	unsigned char	*p;

	*p = memoryBlock;
	while (size > 0)
	{
		if (*p == (unsigned char)SearchedChar)
		{
			return ((void *)p);
		}
		p++;
		size--;
	}
	return (NULL);
} */

/* int main() {
    // Example usage of ft_memchr
    const char* str = "Hello, World!";
    char target = 'W';

    // Search for 'W' in the string
    void* result = ft_memchr(str, target, 13);

    // Check if the character was found
    if (result != NULL) {
        printf("Character '%c' found at index %zu\n",
				target, (size_t)((char*)result - str));
    } else {
        printf("Character '%c' not found\n", target);
    }

    return 0;
} */