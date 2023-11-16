/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klefranc <klefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 07:41:38 by klefranc          #+#    #+#             */
/*   Updated: 2023/11/16 08:00:35 by klefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char* p = str;
	while (n-- > 0)
	{
		*p++ = 0;
	}
}

/* int main() 
{
    char myArray[20];

    bzero(myArray, sizeof(myArray));
    for (int i = 0; i < 25; i++) {
        printf("%d ", myArray[i]);
    }

    return 0;
} */