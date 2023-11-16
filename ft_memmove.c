/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klefranc <klefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 07:41:25 by klefranc          #+#    #+#             */
/*   Updated: 2023/11/16 08:00:25 by klefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	if (dest == src || size == 0)
		return (dest);
	if (dest < src || dest >= (char*)src + size)
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
	}
	else
	{
		char *d = (char*)dest + (size - 1);
		const char *s = (const char*)src + (size - 1);

		while (size > 0)
		{
			d--;
			s--;
			size--;
		}
	}
	return (dest);
}

/* #include <stdio.h>
#include <string.h>

int main() {
    // Test with non-overlapping regions
    char dest1[20];
    const char src1[] = "Hello, memmove!";
    ft_memmove(dest1, src1, sizeof(src1));

    // Test with overlapping regions
    char dest2[20];
    const char src2[] = "Hello, memmove!";
    ft_memmove(dest2 + 7, src2, 5);

    // Print the results
    printf("Test 1 - Non-overlapping regions:\n");
    printf("Source: %s\n", src1);
    printf("Destination: %s\n\n", dest1);

    printf("Test 2 - Overlapping regions:\n");
    printf("Source: %s\n", src2);
    printf("Destination: %s\n", dest2);

    return 0;
}
 */




