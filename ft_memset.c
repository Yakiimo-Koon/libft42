/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevin <kevin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:23:01 by kevin             #+#    #+#             */
/*   Updated: 2023/11/12 18:43:08 by kevin            ###   ########.fr       */
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

int main() {
    char monTableau[20];

    ft_memset(monTableau, 'Y', sizeof(monTableau));
    for (int i = 0; i < 15; i++) {
        printf("%c ", monTableau[i]);
    }
    return 0;
}