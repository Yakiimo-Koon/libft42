/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klefranc <klefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:43:35 by klefranc          #+#    #+#             */
/*   Updated: 2023/11/16 09:54:32 by klefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	const unsigned char *p1 = ptr1;
	const unsigned char *p2 = ptr2;

	while (num > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
		num--;
	}
	return (NULL);
}

/* int main()
{
    const char* str1 = "Hello, World!";
    const char* str2 = "Hello, World!";
    
    int result = ft_memcmp(str1, str2, 13);

    if (result == 0) {
        printf("The first 13 characters are identical.\n");
    } else if (result < 0) {
        printf("The first 13 characters differ, and str1 is less than str2.\n");
    } else {
        printf("The first 13 characters differ, and str1 is greater than str2.\n");
    }

    return 0;
} */