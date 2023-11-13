/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevin <kevin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:40:54 by kevin             #+#    #+#             */
/*   Updated: 2023/11/12 18:43:31 by kevin            ###   ########.fr       */
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

int main() 
{
    char myArray[20];

    bzero(myArray, sizeof(myArray));
    for (int i = 0; i < 25; i++) {
        printf("%d ", myArray[i]);
    }

    return 0;
}