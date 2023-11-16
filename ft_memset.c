/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klefranc <klefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 07:41:12 by klefranc          #+#    #+#             */
/*   Updated: 2023/11/16 08:00:28 by klefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memset(void* str, int c, size_t n)
{
	unsigned char* p = str;
	while (n-- > 0)
	{
		*p++ = (unsigned char)c;
	}
	return (str);
}

/* int main() {
    char monTableau[20];

    ft_memset(monTableau, 'Y', sizeof(monTableau));
    for (int i = 0; i < 15; i++) {
        printf("%c ", monTableau[i]);
    }
    return 0;
} */